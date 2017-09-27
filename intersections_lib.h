#ifndef INTERSECTION_LIB_H
#define INTERSECTION_LIB_H

#include "globals_lib.h"

//This library declarates every function used to find intersections.

using namespace std;

//Returns the orientation (1 if clockwise, -1 if counter clockwise or 0 if collinear) of a segment and a point in the plane, using the 
//determinant of the matrix made by their coordinates as described by David Mount. 
/** @file */
int or2(Point P, Point Q, Point R);

//Given two segments, this function calculates the point of intersection and stores it in a global instance of a struct.
/** @file */
void findIntersection(LineSegment A, LineSegment B);

//Does the orientation test based in the results from or2 when called for each combination of coordinates. 
//Returns "true" if there is an itersection or "false" otherwise.
/** @file */
bool properIntersect(LineSegment A, LineSegment B);

//Checks which lines intersect checking by pairs of lines. Complexity O(n²). 
/** @file */
void checkIntersectionsNaive();

//Implements the Sweep Line Algorithm.
/** @file */
bool sweepLine();

//Maps the points for the special struct used in the Sweep Line Algorithm.
/** @file */
void addToSweepStruct();

#endif
