#include <stdio.h>
#include <vector>

#include "intersections_lib.h"
#include "globals_lib.h"

//For every new line given by the user, we check if there is an interseption with another one. I call it naive because its complexity is O(n²).
void checkIntersectionsNaive(){

	//Get how many lines we have to check.
	int vectorSize = segmentVector.size();

	for(int j = 0; j < vectorSize; j++){

		//Test if there is an intersection.
		if(properIntersect(segmentVector.back(), segmentVector[j])){
			numberOfIntersections++;
			
			//Calculates where the two segments intersect.
			findIntersection(segmentVector.back(), segmentVector[j]);
		}
	}
}  

