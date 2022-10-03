#include "Point3D.hpp"

Point3D::Point3D(float x_coord, float y_coord, float z_coord)
	: x(x_coord)
	, y(y_coord)
	, z(z_coord)
{
}

Point3D::Point3D()
{
}

Point3D& Point3D::operator=(const Point3D& right)
{
	x = right.x;
	y = right.y;
	z = right.z;
	return *this;
}

Point3D Point3D::operator+(const Point3D& right) const
{
	return Point3D(x + right.x, y + right.y, z + right.z);
}

Point3D Point3D::operator-(const Point3D& right) const
{
	return Point3D(x - right.x, y - right.y, z - right.z);
}

Point3D Point3D::operator*(const Point3D& right) const
{
	return Point3D(x * right.x, y * right.y, z * right.z);
}

Point3D Point3D::operator*(float value) const
{
	return Point3D(x * value, y * value, z * value);
}

Point3D& Point3D::operator+=(const Point3D& right)
{
	x += right.x;
	y += right.y;
	z += right.z;
	return *this;
}

Point3D& Point3D::operator-=(const Point3D& right)
{
	x -= right.x;
	y -= right.y;
	z -= right.z;
	return *this;
}

Point3D& Point3D::operator*=(const Point3D& right)
{
	x *= right.x;
	y *= right.y;
	z *= right.z;
	return *this;
}

Point3D& Point3D::operator*=(float value)
{
	x *= value;
	y *= value;
	z *= value;
	return *this;
}

std::ostream& operator<<(std::ostream& out, const Point3D& right)
{
	out << "x = " << right.x << "; y = " << right.y << "; z = " << right.z;
	return out;
}
