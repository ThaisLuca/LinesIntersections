#include <stdio.h>
#include <vector>

#include <GL/gl.h>
#include <GL/glut.h>

#include "graphics_lib.h"
#include "intersection_lib.h"
#include "globals.h"

using namespace std;

int main(int argc, char** argv){

	numberOfIntersections = 0;

	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_DEPTH | GLUT_DOUBLE | GLUT_RGBA);
	glutInitWindowSize(500, 500);
	glutCreateWindow("Trabalho 1 - Thais Luca");
	init();
	glutReshapeFunc(reshape);
	glutMouseFunc(mouseFunc);
	
	if(segmentVector.size() > 1) checkIntersectionsNaive();
	displayLines();
	
	glutMainLoop();
	
	return 0;

}

