#include <stdio.h>
#include <vector>

#include <GL/gl.h>
#include <GL/glut.h>

#include "graphics_lib.h"
#include "intersection_lib.h"
#include "globals.h"

//Finds the point of interception of two segments. No needing to check if the determinant is zero because this function is called after properIntersect being called.

void findIntersection(LineSegment A, LineSegment B){

	Point intersect;
	
	//Find components of the first segment
	int A1 = A.p2.y - A.p1.y;
	int B1 = A.p1.x - A.p2.x;  
	int C1 = A1 * A.p1.x + B1 * A.p1.y;

	//Find the components of the second segment
	int A2 = B.p2.y - B.p1.y;
	int B2 = B.p1.x - B.p2.x;
	int C2 = A2 * B.p1.x + B2 * B.p1.y;

	int det = A1 * B2 - A2 * B1;
	
	//Calculate the points of interseption
	intersect.x = (B2 * C1 - B1 * C2) / det;
	intersect.y = (A1 * C2 - A2 * C1) / det;

	intersections.insert(intersections.end(), intersect);
	
}

//As decribed by David Mount, we can find if two lines intersect by checking their orientations. Supose A is segment PQ and B is RS.
//We call the function or2 for every possible combination of 3 points.
 
bool properIntersect(LineSegment A, LineSegment B){
	if(or2(A.p1, A.p2, B.p1) * 		//Or2(P, Q, R) *
		or2(A.p1, A.p2, B.p2) < 0 && 	//Or2(P, Q, S ) < 0 &&
		or2(B.p1, B.p2, A.p1) * 	//Or2(R, S, P) *
		or2(B.p1, B.p2, A.p2) < 0){	//Or2(R, S, Q) < 0
			return true;
	}

	return false;				
}

//Calculates the determinant of matrix 
//	|1	1	1 |	
//	|px	qx	rx|
//	|py	qy	ry|
	
//Returns -1 if in counter clockwise orientation, +1 if in clockwise orientation or 0 if collinear.

int or2(Point P, Point Q, Point R){

	int det = (Q.y - P.y) * (R.x - Q.x) - (Q.x - P.x) * (R.y - Q.y);

	if(det == 0) return 0;
	return (det > 0? 1 : -1);
}
