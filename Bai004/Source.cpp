#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
using namespace std;
float tinhDienTichXungQuanh(float);

int main()
{
	cout << "Nhap ban kinh r = ";
	float r;
	cin >> r;

	float s;
	s = tinhDienTichXungQuanh(r);
	cout << "Dien tich xung quanh cua hinh cau = " << s;

	return 0;
}

float tinhDienTichXungQuanh(float rr)
{
	return 4 * M_PI * pow(rr, 2);
}