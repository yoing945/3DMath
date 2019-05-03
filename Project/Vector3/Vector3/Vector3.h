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

	//�������
	float operator *(const Vector3 &a);

};

/*----------------------�ǳ�Ա����----------------------*/

//������ģ
inline float vectorMag(const Vector3 &a);

//�����������Ĳ��
inline Vector3 crossProduct(const Vector3 &a, const Vector3 &b);

//�������
inline Vector3 operator * (float k, const Vector3 &a);

//����������
inline float distance(const Vector3 &a, const Vector3 &b);

/*----------------------�ǳ�Ա����----------------------*/
//ȫ��������
extern const Vector3 kZeroVector;
