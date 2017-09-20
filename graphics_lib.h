#ifndef GRAPHICS_LIB_H
#define GRAPHICS_LIB_H

//Gets the coordinates to draw a segment by two clicks from the user.
void mouseFunc(int button, int state, int x, int y);

//Arrumar uma descrição boa da apostila
void changeSize();

//Responsible for drawing the lines in the screen as soon as mouseFunc gives the coordinates.
void displayLines();


//Arrumar uma definição boa na apostila
void reshape(int w, int h);

//This function is called to initialize the window and paint it white. Also responsable for clearing the screen if needed.
void init(void);

#endif
