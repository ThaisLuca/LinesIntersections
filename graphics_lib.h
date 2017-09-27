#ifndef GRAPHICS_LIB_H
#define GRAPHICS_LIB_H

using namespace std;

//In this library we declarate all Graphic functions used in this aplication.


void changeSize();

//Draw the lines and intersections on the screen.
/** @file */
void renderScene();

//Reshapes the window.
/** @file */
void reshape(int w, int h);

//Get the mouse clicks.
/** @file */
void mouseFunc(int button, int state, int x, int y);

//Used to give motion to the mouse.
/** @file */
void mouseDrag(int x, int y);

//Initializes the window, paint it white and set buffers.
/** @file */
void init();

#endif
