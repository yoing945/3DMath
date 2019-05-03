#include <cmath>
#include "Vector3.h"

#pragma once

//重载赋值运算符
Vector3& Vector3::operator = (const Vector3& a)
{
	this->x = a.x; this->y = a.y; this->z = a.z;
	return *this;
}

bool Vector3::operator == (const Vector3& a)
{
	return this->x == a.x && this->y == a.y && this->z == a.z;
}

bool Vector3::operator != (const Vector3& a)
{
	return this->x != a.x || this->y != a.y || this->z != a.z;
}

//置为零向量
void Vector3::zero()
{
	x = y = z = 0.0f;
}

//重载一元 "-"(负号运算符)
Vector3 Vector3::operator - ()
{
	return Vector3(-x, -y, -z);
}

//重载二元+运算符
Vector3 Vector3::operator + (const Vector3 &a)
{
	return Vector3(x + a.x, y + a.y, z + a.z);
}

//重载二元-运算符
Vector3 Vector3::operator - (const Vector3 &a)
{
	return Vector3(x - a.x, y - a.y, z - a.z);
}

//与标量乘法
Vector3 Vector3::operator * (const float a)
{
	return Vector3(x * a, y * a , z * a);
}

//与标量除法
Vector3 Vector3::operator / (const float a)
{
	return Vector3(x / a, y / a, z / a);
}

//自增
Vector3& Vector3::operator += (const Vector3 &a)
{
	x += a.x;
	y += a.y;
	z += a.z;
	return *this;
}

//自减
Vector3& Vector3::operator -= (const Vector3 &a)
{
	x -= a.x;
	y -= a.y;
	z -= a.z;
	return *this;
}

//自乘
Vector3& Vector3::operator *= (const float a)
{
	x *= a;
	y *= a;
	z *= a;
	return *this;
}

//自除
Vector3& Vector3::operator /= (const float a)
{
	x /= a;
	y /= a;
	z /= a;
	return *this;
}

//向量标准化
void Vector3::normallize()
{
	float magSq = x * x + y * y + z * z;
	if (magSq > 0.0f)
	{
		float oneOverMag = 1.0f / sqrt(magSq);
		x *= oneOverMag;
		y *= oneOverMag;
		z *= oneOverMag;
	}
}

//向量点乘
float Vector3::operator *(const Vector3 &a)
{
	return x * a.x + y * a.y + z * a.z;
}


/*----------------------非成员函数----------------------*/

//求向量模
inline float vectorMag(const Vector3 &a)
{
	return sqrt(a.x * a.x + a.y * a.y + a.z * a.z);
}

//计算两向量的叉乘
inline Vector3 crossProduct(const Vector3 &a, const Vector3 &b)
{
	return Vector3(
		a.y * b.z - b.y * a.z,
		b.x * a.z - a.x * b.z,
		a.x * b.y - b.x * a.y
	);
}

//标量左乘
inline Vector3 operator * (float k, const Vector3 &a)
{
	return Vector3(k * a.x, k * a.y, k * a.z);
}

//计算两点间距
inline float distance(const Vector3 &a, const Vector3 &b)
{
	float dx = a.x - b.x;
	float dy = a.y - b.y;
	float dz = a.z - b.z;
	return sqrt(dx * dx + dy * dy + dz * dz);
}

