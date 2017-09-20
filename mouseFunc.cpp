#include <stdio.h>
#include <vector>

#include <GL/gl.h>
#include <GL/glut.h>

#include "graphics_lib.h"
#include "intersection_lib.h"
#include "globals.h"

void mouseFunc(int button, int state, int x, int y) {
	if(button == GLUT_LEFT_BUTTON && state == GLUT_DOWN){
		LineSegment newSeg; //Make new segment
		newSeg.p1.x = newSeg.p2.x = x;
		newSeg.p1.y = newSeg.p2.y = (500-y); 
		//segmentVector.insert(segmentVector.end(), newSeg);
		seg = newSeg;
		//printf("DOWN (%d, %d)\n", x, (500-y));
	} 

	if(button == GLUT_LEFT_BUTTON && state == GLUT_UP){
		seg.p2.x = x;
		seg.p2.y = (500-y);
		segmentVector.insert(segmentVector.end(), seg); //Insert segment into segment vectors
		//printf("UP (%d, %d)\n", x, (500-y));

		displayLines();
	}
}
