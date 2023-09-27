#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
using namespace std;
float tinhTheTichHinhCau(float);

int main()
{
	cout << "Nhap ban kinh r = ";
	float r;
	cin >> r;

	float v;
	v = tinhTheTichHinhCau(r);
	cout << "The tich cua hinh cau = " << v;

	return 0;
}

float tinhTheTichHinhCau(float rr)
{
	return (float)4 / 3 * M_PI * pow(rr, 3);
}