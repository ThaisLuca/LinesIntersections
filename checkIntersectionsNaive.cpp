#include <stdio.h>
#include <vector>

#include <GL/gl.h>
#include <GL/glut.h>

#include "graphics_lib.h"
#include "intersection_lib.h"
#include "globals.h"

//Find all the intersections between the lines. I call it naive because it checks all the pairs of segments, even A e B and then B e A and A e A (collinear in the orietation test). Its complexity is O(N^2).
int main(){
	for(int i = 0; i < segmentVector.size(); i++){
		for(int j = 0; j < segmentVector.size(); j++){
			//Test if there is an intersection
			if(properIntersect(segmentVector[i], segmentVector[j])){
				numberOfIntersections++;
				findIntersection(segmentVector[i], segmentVector[j]);
			}
			printf("There are %d intersections.\n", numberOfIntersections);
			return 0;
		}
	}
}
