#ifndef GLOBALS_LIB_H
#define GLOBALS_LIB_H

#include <vector>

//Library to store all the global variables used in the program.

using namespace std;

//Struct to store the coordinates.
typedef struct {
	int x;
	int y;	
} Point;

//Store the start and end points of each line segment.
typedef struct {
	Point p1;
	Point p2;
	
} LineSegment;

//Special struct for the Sweep Line Algorithm. Stores the point, if it's to the left or to the right, from wich line it came from and the whole segment.
typedef struct {
	Point p;		//Keeps the coordinates of a given point.
	bool isLeft;		//True if the point is to the left or false if it's to the right.
	int lineIndex;		//Index on the global vector.
	LineSegment seg;	//The whole segment it came from.
} SweepLineSeg;

//As in the documentation of sort library, we can sort a vector using the following struct. Sorting by the x-coordinates.
struct find_smallest {
	inline bool operator() (const SweepLineSeg& r, const SweepLineSeg& s) {
		return (r.p.x < s.p.x);
	}
};

//Define a global LineSegment to store the coordinates from mouseFunc.
extern LineSegment seg;

//Keeps all the lines drawn by the user.
extern vector<LineSegment> segmentVector;

//Special vector, of SweepLineSeg objects, used in the Sweep Line Algorithm.
extern vector<SweepLineSeg> sweepVector;

//Vector to store the points of intersection.
extern vector<Point> intersections;

//W is for width and h is for height.
extern int w, h;

//Used by mouseDrag function. So we can know if it's the first click or the second one.
extern bool firstClick;

//Holds the number of intersections found by the algorithm.
extern int numberOfIntersections;

#endif
