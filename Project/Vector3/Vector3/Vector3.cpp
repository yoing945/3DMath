#include <cmath>
#include "Vector3.h"

#pragma once

//���ظ�ֵ�����
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

//��Ϊ������
void Vector3::zero()
{
	x = y = z = 0.0f;
}

//����һԪ "-"(���������)
Vector3 Vector3::operator - ()
{
	return Vector3(-x, -y, -z);
}

//���ض�Ԫ+�����
Vector3 Vector3::operator + (const Vector3 &a)
{
	return Vector3(x + a.x, y + a.y, z + a.z);
}

//���ض�Ԫ-�����
Vector3 Vector3::operator - (const Vector3 &a)
{
	return Vector3(x - a.x, y - a.y, z - a.z);
}

//������˷�
Vector3 Vector3::operator * (const float a)
{
	return Vector3(x * a, y * a , z * a);
}

//���������
Vector3 Vector3::operator / (const float a)
{
	return Vector3(x / a, y / a, z / a);
}

//����
Vector3& Vector3::operator += (const Vector3 &a)
{
	x += a.x;
	y += a.y;
	z += a.z;
	return *this;
}

//�Լ�
Vector3& Vector3::operator -= (const Vector3 &a)
{
	x -= a.x;
	y -= a.y;
	z -= a.z;
	return *this;
}

//�Գ�
Vector3& Vector3::operator *= (const float a)
{
	x *= a;
	y *= a;
	z *= a;
	return *this;
}

//�Գ�
Vector3& Vector3::operator /= (const float a)
{
	x /= a;
	y /= a;
	z /= a;
	return *this;
}

//������׼��
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

//�������
float Vector3::operator *(const Vector3 &a)
{
	return x * a.x + y * a.y + z * a.z;
}


/*----------------------�ǳ�Ա����----------------------*/

//������ģ
inline float vectorMag(const Vector3 &a)
{
	return sqrt(a.x * a.x + a.y * a.y + a.z * a.z);
}

//�����������Ĳ��
inline Vector3 crossProduct(const Vector3 &a, const Vector3 &b)
{
	return Vector3(
		a.y * b.z - b.y * a.z,
		b.x * a.z - a.x * b.z,
		a.x * b.y - b.x * a.y
	);
}

//�������
inline Vector3 operator * (float k, const Vector3 &a)
{
	return Vector3(k * a.x, k * a.y, k * a.z);
}

//����������
inline float distance(const Vector3 &a, const Vector3 &b)
{
	float dx = a.x - b.x;
	float dy = a.y - b.y;
	float dz = a.z - b.z;
	return sqrt(dx * dx + dy * dy + dz * dz);
}

