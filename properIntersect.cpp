#include <stdio.h>

#include "globals_lib.h"
#include "intersections_lib.h"

using namespace std;

//As decribed by David Mount, we can find if two lines intersect by checking their orientations. Supose A is segment PQ and B is RS.
//We call the function or2 for every possible combination of 3 points. Returns true if intersect and false if doesn't.
 
bool properIntersect(LineSegment A, LineSegment B){
	if(or2(A.p1, A.p2, B.p1) * 		//Or2(P, Q, R) *
		or2(A.p1, A.p2, B.p2) < 0 && 	//Or2(P, Q, S ) < 0 &&
		or2(B.p1, B.p2, A.p1) * 	//Or2(R, S, P) *
		or2(B.p1, B.p2, A.p2) < 0){	//Or2(R, S, Q) < 0
			return true;		
	}

	return false;				
}

