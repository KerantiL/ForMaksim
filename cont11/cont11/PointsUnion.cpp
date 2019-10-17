#include "PointsUnion.h"

//Добавление точек происходит только тогда, когда точки и множество одинаковой размерности
PointsUnion::PointsUnion(set<Point> points, int dimension)
{
	this->dimension = dimension;
	for (Point i : points)
	{
		this->Insert(i);
	}
}

//Добавление точек происходит только тогда, когда точки и множество одинаковой размерности
PointsUnion::PointsUnion(int dimension)
{
	this->points = {};
	this->dimension = dimension;
}

set<Point> PointsUnion::GetPoints()
{
	return this->points;
}

void PointsUnion::Insert(Point p)
{
	if (p.GetDimension() == this->dimension)
		this->points.insert(p);
}

void PointsUnion::Delete(Point p)
{
	if (p.GetDimension() == this->dimension)
		this->points.erase(p);
}


PointsUnion PointsUnion::Union(PointsUnion other)
{
	PointsUnion newPointsUnion(*this);
	for (Point p : other.GetPoints())
	{
		if (p.GetDimension() == this->dimension)
		{
			newPointsUnion.points.insert(p);
		}
	}
	return newPointsUnion;
}

PointsUnion PointsUnion::Intersection(PointsUnion other)
{
	PointsUnion newPointsUnion({});
	for (Point p : other.GetPoints())
	{
		for (Point q : this->points)
		{
			if (p == q && p.GetDimension() == q.GetDimension())
				newPointsUnion.points.insert(q);
		}
	}
	return newPointsUnion;
}

PointsUnion PointsUnion::Difference(PointsUnion other)
{
	PointsUnion newPointsUnion(*this);
	for (Point p : other.GetPoints())
	{
		for (Point q : this->points)
		{
			if (p == q && p.GetDimension() == q.GetDimension())
				newPointsUnion.points.erase(p);
		}
	}
	return newPointsUnion;
}

