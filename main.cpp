#include <stdio.h>

#include <GL/gl.h>
#include <GL/glut.h>

#include "globals_lib.h"
#include "graphics_lib.h"

using namespace std;

//Initialize the variables from globals_lib.h.
int numberOfIntersections = 0;

//Sets the size of the screen.	
int w = 500, h = 500;	

bool firstClick = false;

LineSegment seg;
vector<LineSegment> segmentVector;

vector<SweepLineSeg> sweepVector;

vector<Point> intersections;

int main(int argc, char** argv){

	//Basic functions for an OpenGL project.
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_DEPTH | GLUT_DOUBLE | GLUT_RGBA);
	glutInitWindowSize(w, h);
	glutCreateWindow("Trabalho 1 - Thais Luca");
	init();
	glutReshapeFunc(reshape);
	glutMouseFunc(mouseFunc);
	glutPassiveMotionFunc(mouseDrag);
	
	glutMainLoop();

	return 0;
}
