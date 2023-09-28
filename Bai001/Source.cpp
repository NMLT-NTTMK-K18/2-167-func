#include <iostream>
#include <cmath>
using namespace std;
void Nhap(float &, float &);
float TinhKhoangCach(float, float, float, float);

int main()
{
	cout << "NHAP DIEM A(x1, y1)" << endl;
	float x1, y1;
	Nhap(x1, y1);

	cout << "NHAP DIEM B(x2, y2)" << endl;
	float x2, y2;
	Nhap(x2, y2);

	float khoang_cach;
	khoang_cach = TinhKhoangCach(x1, y1, x2, y2);
	cout << "Khoang cach AB = " << khoang_cach;
	return 0;
}

void Nhap(float &xx, float &yy)
{
	cout << "Nhap x: ";
	cin >> xx;

	cout << "Nhap y: ";
	cin >> yy;
}

float TinhKhoangCach(float xx1, float yy1, float xx2, float yy2)
{
	return sqrt(pow(xx2 - xx1, 2) + pow(yy2 - yy1, 2));
}