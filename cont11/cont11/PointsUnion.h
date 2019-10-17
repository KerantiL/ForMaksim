#pragma once
#include <set>
#include "Point.h"
#include <algorithm>
#include <iostream>
using namespace std;

/*
Множество определённой размерности, с такой же размерностью точек

*/
class PointsUnion
{
private:
	set<Point> points;
	int dimension;
public:
	PointsUnion(set<Point> points, int dimension);
	PointsUnion(int dimension);
	set<Point> GetPoints();
	void Insert(Point p);
	void Delete(Point p);
	PointsUnion Union(PointsUnion other);
	PointsUnion Intersection(PointsUnion other);
	PointsUnion Difference(PointsUnion other);
};

