#pragma once
#include <iostream>

class Point3D
{

public:
	float x = 0;
	float y = 0;
	float z = 0;

	Point3D(float x_coord, float y_coord, float z_coord);
	Point3D();
	Point3D& operator=(const Point3D& right);
	Point3D operator+(const Point3D& right) const;
	Point3D operator-(const Point3D& right) const;
	Point3D operator*(const Point3D& right) const;
	Point3D operator*(float value) const;
	Point3D& operator+=(const Point3D& right);
	Point3D& operator-=(const Point3D& right);
	Point3D& operator*=(const Point3D& right);
	Point3D& operator*=(float value);
	friend std::ostream& operator<<(std::ostream& cout, const Point3D& right);
};


