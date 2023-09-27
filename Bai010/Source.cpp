#include <iostream>
#include <cmath>
using namespace std;
void nhapXY(float &, float &);
float tinhKhoangCach(float, float, float, float);
float tinhChuViTamGiac(float, float, float);

int main()
{
	float x1, y1;
	cout << "NHAP A(x1, y1)" << endl;
	nhapXY(x1, y1);

	float x2, y2;
	cout << "NHAP B(x2, y2)" << endl;
	nhapXY(x2, y2);

	float x3, y3;
	cout << "NHAP C(x3, y3)" << endl;
	nhapXY(x3, y3);

	float a, b, c;
	a = tinhKhoangCach(x1, y1, x2, y2);
	b = tinhKhoangCach(x2, y2, x3, y3);
	c = tinhKhoangCach(x3, y3, x1, y1);

	float p;
	p = tinhChuViTamGiac(a, b, c);
	cout << "Chu vi tam giac = " << p;

	return 0;
}

void nhapXY(float &XX, float &YY)
{
	cout << "Nhap x = ";
	cin >> XX;
	cout << "Nhap y = ";
	cin >> YY;
}

float tinhKhoangCach(float xx1, float yy1, float xx2, float yy2)
{
	return sqrt(pow(xx2 - xx1, 2) + pow(yy2 - yy1, 2));
}

float tinhChuViTamGiac(float aa, float bb, float cc)
{
	return aa + bb + cc;
}