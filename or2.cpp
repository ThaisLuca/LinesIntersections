#include <stdio.h>

#include "globals_lib.h"
#include "intersections_lib.h"

using namespace std;

Point P, Q, R;

//Calculates the determinant of matrix 
//	|1	1	1 |	
//	|px	qx	rx|
//	|py	qy	ry|
	
//Returns -1 if in counter clockwise orientation, +1 if in clockwise orientation or 0 if collinear. Based on David Mount's algorithm.

int or2(Point P, Point Q, Point R){

	int det = (Q.y - P.y) * (R.x - Q.x) - (Q.x - P.x) * (R.y - Q.y);

	if(det == 0) return 0;
	return (det > 0? 1 : -1);
}
