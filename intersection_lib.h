#ifndef INTERSECTION_LIB_H
#define INTERSECTION_LIB_H

#include "globals.h"

//Returns the orientation (1 if clockwise, -1 if counter clockwise or 0 if collinear) of a segment and a point in the plane, using the 
//determinant of the matrix made by their coordinates as described by David Mount. 
int or2(Point P, Point Q, Point R);

//Given two segments, this function calculates the point of intersection and stores it in a global instance of a struct.
void findIntersection(LineSegment A, LineSegment B);

//Does the orientation test based in the results from or2 when its called for each combination of coordinates. 
//Returns "true" if there is an itersection or "false" otherwise.
bool properIntersect(LineSegment A, LineSegment B);

int checkIntersectionsNaive();

#endif
