#pragma once

class Vector3
{
public:
	float x, y, z;
	
	Vector3(){}
	//copy constructor
	Vector3(const Vector3& a) :x(a.x), y(a.y), z(a.z) {}
	Vector3(float nx, float ny, float nz) :x(nx), y(ny), z(nz) {}

	//override Assignment operator
	Vector3& operator = (const Vector3& a);
};