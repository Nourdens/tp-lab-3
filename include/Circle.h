#pragma once
class Circle {
private:
	double radius;
	double ference;
	double area;

public:
	Circle(double radius_set);


	void setRadius(double radius_set);
	void setFerence(double ference_set);
	void setArea(double area_set);
	double getRadius();
	double getFerence();
	double getArea();

};
