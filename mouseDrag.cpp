#include <stdio.h>
#include <vector>

#include <GL/gl.h>
#include <GL/glut.h>

#include "globals_lib.h"
#include "graphics_lib.h"
#include "intersections_lib.h"

//Gets mouse motion.
void mouseDrag (int x, int y){

	if(firstClick){
		//Stores the current coordinates as the end point.
		seg.p2.x = x;
		seg.p2.y = (500-y);

		renderScene();
	}
}
