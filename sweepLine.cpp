#include <stdio.h>
#include <vector>
#include <algorithm>

#include "intersections_lib.h"
#include "globals_lib.h"
#include "AVL.h"
#include "Node.h"

using namespace std;

//Implements the Sweep Line Algorithm.
bool sweepLine(){

	AVL avl;
	
	int vectorSize = sweepVector.size();

	//Order by x-coordinate, so it can be ordered by y in the AVL tree.
	sort(sweepVector.begin(), sweepVector.end(), find_smallest());

	//printf("Menor ponto: (%d, %d)\n", sweepVector[0].p.x, sweepVector[0].p.y);
	//printf("Maior ponto: (%d, %d)\n", sweepVector.back().p.x, sweepVector.back().p.y);

	for(int i = 0; i < vectorSize; i++){
	
		//If it's a left point, we add the whole segment to the AVL tree.
		if(sweepVector[i].isLeft){
			avl.add(sweepVector[i].p.y, sweepVector[i].lineIndex);
	
			//Check if the left point is the first one to be drawn. So I can add the right side correctly.		
			if(sweepVector[i].p.y == sweepVector[i].seg.p1.y){ 
				avl.add(sweepVector[i].seg.p2.y, sweepVector[i].lineIndex);
			} else {
				avl.add(sweepVector[i].seg.p1.y, sweepVector[i].lineIndex);
			}
			
			//Tries to get the left child of the current node by it's y-coordinate.
			int prevIndex = avl.getPrev(sweepVector[i].p.y);
			if(prevIndex != -1) {
				//Check if intersect.
				if(properIntersect(sweepVector[i].seg, sweepVector[prevIndex].seg)){
					findIntersection(sweepVector[i].seg, sweepVector[prevIndex].seg);
						return true;
				}
			}

			//Tries to get the right child of the current node by it's y-coordinate.
			int nextIndex = avl.getNext(sweepVector[i].p.y);
			if(nextIndex != -1){	
				//Check if intersect.		
				if(properIntersect(sweepVector[i].seg, sweepVector[nextIndex].seg)){
					findIntersection(sweepVector[i].seg, sweepVector[nextIndex].seg);
						return true;
				}
			}

		//For points to the right.
		} else {
			int prevIndex = avl.getPrev(sweepVector[i].p.y); 
			int nextIndex = avl.getNext(sweepVector[i].p.y);

			//Tries to get left and right children.
			if(prevIndex != -1 && nextIndex != -1){
				//Check if children intersect.
				if(properIntersect(sweepVector[prevIndex].seg, sweepVector[nextIndex].seg)){
					findIntersection(sweepVector[prevIndex].seg, sweepVector[nextIndex].seg);
						return true;
				}
			} 
			//Removes point from the vector.
			avl.remove(sweepVector[i].seg.p1.y) && avl.remove(sweepVector[i].seg.p2.y);
		}
		
	}
	return false;
}

