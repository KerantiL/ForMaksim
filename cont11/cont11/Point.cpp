#include "Point.h"


Point::Point()
{
	coords = {};
	dimension = 0;
}


Point::Point(vector<double> coords)
{
	this->coords = coords;
	this->dimension = coords.size();
}


Point::Point(int dimension)
{
	this->dimension = dimension;
	coords.resize(dimension);
	for (double i : coords)
		i = 0.0;
}

int Point::GetDimension()
{
	return this->dimension;
}

void Point::setDimension(int dimension)
{
	this->dimension = dimension;
}

vector<double> Point::GetCoords()
{
	return this->coords;
}

void Point::SetCoords(vector<double> coords)
{
	this->coords = coords;
}

bool operator< (const Point& point1, const Point& point2)
{
	double sum1 = 0, sum2 = 0;
	for (int i = 0; i < point1.dimension; i++)
	{
		sum1 += point1.coords[i];
		sum2 += point2.coords[i];
	}
	return sum1 < sum2;
}

bool operator==(const Point& point1, const Point& point2)
{
	if (point1.dimension == point2.dimension)
	{
		for (int i = 0; i < point1.dimension; i++)
			if (point1.coords[i] != point2.coords[i])
				return false;
	}
	else
		return false;
	return true;
}
