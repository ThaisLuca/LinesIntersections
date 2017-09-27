#include <stdio.h>
#include <vector>

#include <GL/gl.h>
#include <GL/glut.h>

#include "globals_lib.h"
#include "graphics_lib.h"
#include "intersections_lib.h"

//Gets the clicks of the user to create the lines.
void mouseFunc(int button, int state, int x, int y) {

	if(button == GLUT_LEFT_BUTTON && state == GLUT_DOWN){

		if(!firstClick){	//If it's the first click, create a new segment, set the first point as the current mouse coordinates.
			firstClick = true;
			LineSegment newSeg; //Make new segment

			newSeg.p1.x = x;
			newSeg.p1.y = (500-y); 
			seg = newSeg;

		} else {
			
			//If it's the second click, stores the segment in the vector of segments.

			seg.p2.x = x;
			seg.p2.y = (500-y);
			firstClick = false;
	
			segmentVector.insert(segmentVector.end(), seg); //Insert segment into segment vectors

		
			/* //For Sweep Line
			//Add the new points to the struct used in Sweep Line Algorithm.
			addToSweepStruct();

			//We need at least two lines to catch an intersection.
			if(sweepVector.size() > 2) sweepLine(); */

			checkIntersectionsNaive();	//Checks intersection for every new line.
			renderScene();			//Draws the new lines and nes intersections.

		}
	} 
}
