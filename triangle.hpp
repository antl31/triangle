// (C) 2013-2015, Sergei Zaychenko, KNURE, Kharkiv, Ukraine

#ifndef _TRIANGLE_HPP_
#define _TRIANGLE_HPP_

/*****************************************************************************/

#include "point.hpp"

/*****************************************************************************/


class Triangle
{

/*-----------------------------------------------------------------*/
	double p0, p1,  p2, p3,  p4,  p5;
	Point point1, point2, point3;

/*------------------------------------------------------------------*/
public:
	Triangle::Triangle(double _p0, double _p1, double _p2, double _p3, double _p4, double _p5);
	Point getPoint1();
	Point getPoint2();
	Point getPoint3();
	double getSide12Length();
	double getSide23Length();
	double getSide13Length();
	double getPerimeter();
	double getArea();
	Triangle::Triangle(Point point0, Point point1, Point point2)
};


/*****************************************************************************/

#endif //  _TRIANGLE_HPP_
