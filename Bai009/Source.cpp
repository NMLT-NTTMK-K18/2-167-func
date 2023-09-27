#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
using namespace std;
float tinhDienTich(float, int);

int main()
{
	cout << "Nhap r = ";
	float r;
	cin >> r;

	cout << "Nhap n = ";
	int n;
	cin >> n;

	float s;
	s = tinhDienTich(r, n);
	cout << "Dien tich da giac deu " << n << " canh noi tiep trong duong tron ban kinh " << r << " = " << s;

	return 0;
}

float tinhDienTich(float rr, int nn)
{
	return (float)1 / 2 * nn * rr * rr * sin(2 * M_PI / nn);
}