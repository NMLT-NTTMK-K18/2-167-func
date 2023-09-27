#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
using namespace std;
float tinhChuVi(float);

int main()
{
	cout << "Nhap ban kinh r = ";
	float r;
	cin >> r;

	float p;
	p = tinhChuVi(r);
	cout << "Chu vi cua duong tron = " << p;

	return 0;
}

float tinhChuVi(float rr)
{
	return 2 * M_PI * rr;
}