#include <stdio.h>

#include "globals_lib.h"

using namespace std;

//Given two segments, this function calculates the point of intersection and stores it in a global instance of a struct.
void findIntersection(LineSegment A, LineSegment B){

	//Initialize variables.
	Point intersect;
	int A1 = 0, B1 = 0, C1 = 0;
	int A2 = 0, B2 = 0, C2 = 0;
	int det = 0;
	
	//Find components of the first segment.
	A1 = A.p2.y - A.p1.y;
	B1 = A.p1.x - A.p2.x;  
	C1 = A1 * A.p1.x + B1 * A.p1.y;

	//Find the components of the second segment
	A2 = B.p2.y - B.p1.y;
	B2 = B.p1.x - B.p2.x;
	C2 = A2 * B.p1.x + B2 * B.p1.y;

	det = A1 * B2 - A2 * B1; //Don't need to check if det is zero, because we already know by properIntersect function that these points aren't collinear.
	
	//Calculate the point of intersection.
	intersect.x = (B2 * C1 - B1 * C2) / det;
	intersect.y = (A1 * C2 - A2 * C1) / det;

	//Add the coordinates to a vector of intersections.
	intersections.insert(intersections.end(), intersect);	
}
