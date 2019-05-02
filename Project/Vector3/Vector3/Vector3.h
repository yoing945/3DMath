#pragma once

class Vector3
{
public:
	float x, y, z;
	
	Vector3(){}
	//copy constructor
	Vector3(const Vector3& a) :x(a.x), y(a.y), z(a.z) {}
	Vector3(float nx, float ny, float nz) :x(nx), y(ny), z(nz) {}

	Vector3& operator = (const Vector3& a);

	bool operator == (const Vector3& a);

	bool operator != (const Vector3& a);

	//��Ϊ������
	void zero();

	//����һԪ "-"(���������)
	Vector3 operator - ();

	//���ض�Ԫ+�����
	Vector3 operator + (const Vector3 &a);

	//���ض�Ԫ-�����
	Vector3 operator - (const Vector3 &a);

	//������˷�
	Vector3 operator * (const float a);

	//���������
	Vector3 operator / (const float a);

	//����
	Vector3 &operator += (const Vector3 &a);

	//�Լ�
	Vector3 &operator -= (const Vector3 &a);

	//�Գ�
	Vector3 &operator *= (const float a);

	//�Գ�
	Vector3 &operator /= (const float a);

	//������׼��
	void normallize();
};