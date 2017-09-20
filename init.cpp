#include <stdio.h>

#include <GL/gl.h>
#include <GL/glut.h>

#include "graphics_lib.h"


void init() {

	glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

	glColor3f(0.0f, 0.0f, 1.0f);

	//glutSwapBuffers();
}

