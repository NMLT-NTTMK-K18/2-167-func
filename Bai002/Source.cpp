#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
using namespace std;
float tinhDienTich(float);

int main()
{
	cout << "Nhap ban kinh r = ";
	float r;
	cin >> r;

	float s;
	s = tinhDienTich(r);
	cout << "Dien tich s = " << s;

	return 0;
}

float tinhDienTich(float rr)
{
	return M_PI * rr * rr;
}