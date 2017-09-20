#ifndef GLOBALS_H
#define GLOBALS_H

typedef struct {
	int x;
	int y;
} Point;

typedef struct {
	Point p1;
	Point p2;

} LineSegment;

LineSegment seg;
std::vector<LineSegment> segmentVector;

std::vector<Point> intersections;

int w = 500, h = 500;

int numberOfIntersections;

#endif //GLOBALS_H
