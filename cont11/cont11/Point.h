#pragma once
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

class Point
{
private:
	vector<double> coords;
	int dimension;
public:
	Point();
	Point(vector<double> coords);
	Point(int dimension);
	int GetDimension();
	void setDimension(int dimension);
	vector<double> GetCoords();
	void SetCoords(vector<double> coords);
	friend bool operator< (const Point &point1, const Point &point2);
	friend bool operator== (const Point& point1, const Point& point2);
};

