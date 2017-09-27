#include <stdio.h>
#include <vector>

#include "globals_lib.h"

using namespace std;

/**
 * @fn addToSweepStruct()
*/

/* As mouse func returns the new points, we need to check which point is to the left and which one is to the right. This function is useful for the Sweep Line Algorithm. We store a point from which line and use isLeft to tell Sweep Line Algorithm if it's on the left or right side. We also store the whole segment, because it's useful to check intersections during the execution. Keeping the whole line is also good to know from which line the points came from.
*/

void addToSweepStruct(){

	//We need two structs, one for ones to the left point and another for those to the right.
	SweepLineSeg newLineSegLeft, newLineSegRight;

	//Make a single test to determinate wich one is on the left.
	if(seg.p1.x < seg.p2.x){		
		newLineSegLeft.p.x = seg.p1.x; 			//Store the x-coordinate.
		newLineSegLeft.p.y = seg.p1.y;			//Store the y-coordinate.
		newLineSegLeft.isLeft = true; 			//Mark as a left.
		newLineSegLeft.lineIndex = sweepVector.size();  //Index of the segment it came from.
		newLineSegLeft.seg = seg;			//The whole line segment.

		newLineSegRight.p.x = seg.p2.x;			//Store the x-coordinate.
		newLineSegRight.p.y = seg.p2.y;			//Store the y-coordinate.
		newLineSegRight.isLeft = false;			//Mark as a right.
		newLineSegLeft.lineIndex = sweepVector.size();	//Save the index of the segment in the vector.
		newLineSegRight.seg = seg;			//Save the whole segment it came from.

	} else {
	
		newLineSegLeft.p.x = seg.p2.x;
		newLineSegLeft.p.y = seg.p2.y;
		newLineSegLeft.isLeft = true;
		newLineSegLeft.lineIndex = sweepVector.size();
		newLineSegLeft.seg = seg;

		newLineSegRight.p.x = seg.p1.x;
		newLineSegRight.p.y = seg.p1.y;
		newLineSegRight.isLeft = false;
		newLineSegLeft.lineIndex = sweepVector.size();
		newLineSegRight.seg = seg;
	}

	sweepVector.insert(sweepVector.end(), newLineSegLeft);	//Add both to the vector that holds the lines.
	sweepVector.insert(sweepVector.end(), newLineSegRight);
}

