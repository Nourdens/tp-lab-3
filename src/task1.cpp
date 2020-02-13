#include <iostream>
#define _USE_MATH_DEFINES
#include <math.h>
#include "Circle.h"
#include "task1.h"

using namespace std;

double calcDelta() {
	double Radius_f = 6378100.0;
	double Rope = 1.0;
	Circle Earth_f (Radius_f);

	double Dlina_s = Earth_f.getFerence() + Rope;
	Circle Earth_s();
	Earth_f.setFerence(Dlina_s);

	double Diff = Earth_f.getRadius() - Radius_f;

	return Diff;
};
double calcCost() {
	double Buss_rad = 3.0;
	Circle Buss = Circle(Buss_rad);
	Circle Ograda = Circle(Buss_rad + 1.0);
	Ograda.setRadius(Buss_rad + 1.0);
	double Sum = 1000 * Buss.getFerence() + 2000 * Ograda.getFerence();

	return Sum;
};
