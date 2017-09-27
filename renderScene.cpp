#include <stdio.h>
#include <vector>

#include <GL/gl.h>
#include <GL/glut.h>

#include "globals_lib.h"


//Renders all lines and intersections. 
void renderScene(void){ 

	int intersectionsSize = intersections.size();	//Number of intersections.
	int vectorSize = segmentVector.size();		//Number of lines.

	glClear(GL_COLOR_BUFFER_BIT);			//Clears the screen.
	glColor3f(0.0, 0.0, 1.0f);			//Sets the color to blue for blue lines.

	//If the user only clicked once, we draw just one line for the mouse motion.
	if(firstClick){
		glLineWidth(2.0);
		glBegin(GL_LINES);
			glVertex2i(seg.p1.x, seg.p1.y);
			glVertex2i(seg.p2.x, seg.p2.y);
		glEnd();
	}

	//Drawns all lines in blue.
	glLineWidth(2.0f);
	glBegin(GL_LINES);
	for(int i = 0; i < vectorSize; i++){
		glVertex2i(segmentVector[i].p1.x, segmentVector[i].p1.y);
		glVertex2i(segmentVector[i].p2.x, segmentVector[i].p2.y);
	}
	glEnd();

	//Drawns all intersections in red.
	glColor3f(1.0f, 0.0f, 0.0f);
	glPointSize(5.0f);
	glEnable(GL_POINT_SMOOTH);
	glHint(GL_POINT_SMOOTH, GL_NICEST);
	glBegin(GL_POINTS);
	for(int i = 0; i < intersectionsSize; i++){
		glVertex2i(intersections[i].x, intersections[i].y);
	}
	glEnd();
		
	glutSwapBuffers();
}

