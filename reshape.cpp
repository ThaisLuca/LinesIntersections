#include <stdio.h>

#include <GL/gl.h>
#include <GL/glut.h>

#include "globals_lib.h"

//Useful for reshapes.
void reshape(int w, int h){

	glViewport(0, 0, w, h);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();

	glOrtho(0.0, w, 0.0, h, 1.0, -1.0);
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
}
