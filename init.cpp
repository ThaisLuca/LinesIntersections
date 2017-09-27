#include <stdio.h>

#include <GL/gl.h>
#include <GL/glut.h>

//After creating the window, we call this function.
void init() {

	//Paints the screen white.
	glClearColor(1.0f, 1.0f, 1.0f, 1.0f);

	//Clear and set buffers.
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

	//Set the next color used to blue.
	glColor3f(0.0f, 0.0f, 1.0f);

	glutSwapBuffers();
}
