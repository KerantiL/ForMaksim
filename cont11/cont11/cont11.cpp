/*
Множество точек. Реализовать классы - «точка n-мерного пространства»
и «множество точек n-мерного пространства». Для последнего класса
реализовать операции: объединение, пересечение и разность множеств.
*/
#include "PointsUnion.h"
#include <iostream>
using namespace std;


int main()
{
	setlocale(LC_ALL, "Rus");
	PointsUnion points1({ {{1, 2, 3}}, {{2, 3, 4}} , {{3, 4, 5}} }, 3);
	cout << "Первое множество:" << endl;
	for (Point i : points1.GetPoints())
	{
		for (double j : i.GetCoords())
		{
			cout << j << " ";
		}
		cout << endl;
	}
	PointsUnion points2({ {{3, 4, 5}}, {{4, 5, 6}} , {{5, 6, 7}} }, 3);
	cout << "Второе множество:" << endl;
	for (Point i : points2.GetPoints())
	{
		for (double j : i.GetCoords())
		{
			cout << j << " ";
		}
		cout << endl;
	}
	PointsUnion points3 = points1.Difference(points2);
	points3 = points1.Union(points2);
	cout << "Объединение множеств:" << endl;
	for (Point i : points3.GetPoints())
	{
		for (double j : i.GetCoords())
		{
			cout << j << " ";
		}
		cout << endl;
	}
	points3 = points1.Intersection(points2);
	cout << "Пересечение множеств:" << endl;
	for (Point i : points3.GetPoints())
	{
		for (double j : i.GetCoords())
		{
			cout << j << " ";
		}
		cout << endl;
	}
	points3 = points1.Difference(points2);
	cout << "Разность множеств:" << endl;
	for (Point i : points3.GetPoints())
	{
		for (double j : i.GetCoords())
		{
			cout << j << " ";
		}
		cout << endl;
	}
}
