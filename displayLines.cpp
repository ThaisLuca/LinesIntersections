#include <stdio.h>
#include <vector>

#include <GL/gl.h>
#include <GL/glut.h>

#include "graphics_lib.h"
#include "globals.h"


void displayLines(void){

	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(0, 0, 1.0);

	glBegin(GL_LINES);
	for(int i = 0; i < segmentVector.size(); i++){
		glVertex2i(segmentVector[i].p1.x, segmentVector[i].p1.y);
		glVertex2i(segmentVector[i].p2.x, segmentVector[i].p2.y);
	}
	glEnd();

	glColor3f(1.0f, 0.0f, 0.0f);
	glPointSize(5);
	glBegin(GL_POINTS);
	for(int i = 0; i < intersections.size(); i++){
		glVertex2i(intersections[i].x, intersections[i].y);
	}
	glEnd();
		
	glutSwapBuffers();
}

