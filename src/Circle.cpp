#include <iostream>
#define _USE_MATH_DEFINES
#include <math.h>
#include "Circle.h"
using namespace std;
Circle::Circle(double radius_set) {
	radius = radius_set;
	ference = 2 * M_PI* radius;
	area = M_PI* radius * radius;

}

void Circle::setRadius(double radius_set)
{
	radius = radius_set;
	ference = 2 * M_PI * radius;
	area = M_PI * radius * radius;

};

void Circle::setFerence(double ference_set)
{
	ference = ference_set;
	radius = ference / (2 * M_PI);
	area = M_PI * radius * radius;

};

void Circle::setArea(double area_set)
{
	area = area_set;
	radius = sqrt(area / M_PI);
	ference = 2 * radius * M_PI;

};

double Circle::getRadius()
{
	return radius;
};

double Circle::getFerence()
{
	return ference;
};

double Circle::getArea() {
	return area;
};
