// (C) 2013-2015, Sergei Zaychenko, KNURE, Kharkiv, Ukraine

#include "triangle.hpp"

/*****************************************************************************/
Triangle::Triangle(double _p0, double _p1, double _p2, double _p3, double _p4, double _p5)
	:p0(_p0),p1(_p1),p2(_p2),p3(_p3),p4(_p4),p5(_p5)
{

}
Triangle::Triangle(Point _point1, Point _point2, Point _point3)
	:point1(_point1),point2(_point2),point3(_point3)
{}

Point Triangle::getPoint1()
{
	return point1;
}

Point Triangle::getPoint2()
{
	return point2;
}

Point Triangle::getPoint3()
{
	return point3;
}


double Triangle::getSide12Length()
{
	return sqrt(pow((point2.m_x - point1.m_x), 2) + pow((point2.m_y - point1.m_y), 2));
}

double Triangle::getSide23Length()
{
	return sqrt(pow((point3.m_x - point2.m_x), 2) + pow((point3.m_y - point2.m_y), 2));
}

double Triangle::getSide13Length()
{
	return sqrt(pow((point3.m_x - point1.m_x), 2) + pow((point3.m_y - point1.m_y), 2));
}


double Triangle::getPerimeter()
{
	return sqrt(pow((point2.m_x - point1.m_x), 2) + pow((point2.m_y - point1.m_y), 2)) +
		sqrt(pow((point3.m_x - point2.m_x), 2) + pow((point3.m_y - point2.m_y), 2)) +
		sqrt(pow((point3.m_x - point1.m_x), 2) + pow((point3.m_y - point1.m_y), 2));
}

double Triangle::getArea()
{
	double s;

	double a, b, c, d;
	a = point1.m_x - point3.m_x;
	b=point1.m_y - point3.m_y;
	c= point2.m_x - point3.m_x;
	d= point2.m_y - point3.m_y;

	s = ((a*c) - (b*d))/2;
;		return abs(s);

}

/*****************************************************************************/
