#include <stdio.h>
#include <vector>

#include <GL/gl.h>
#include <GL/glut.h>

#include "graphics_lib.h"
#include "globals.h"


void reshape(int w, int h){

	glViewport(0, 0, w, h);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();

	glOrtho(0.0, w, 0.0, h, 1.0, -1.0 );
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
}
