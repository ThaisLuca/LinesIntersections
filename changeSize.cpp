#include <stdio.h>

#include <GL/gl.h>
#include <GL/glut.h>

#include "graphics_lib.h"
#include "globals.h"


void changeSize(){

	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();

	glViewport(0, 0, w, h);

	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
	gluLookAt(10, -10, 10, 0,0,0,0,0,1);
}

