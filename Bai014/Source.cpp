#include <iostream>
using namespace std;
float multiply(float, float);

int main()
{
	cout << "Nhap x : ";
	double x;
	cin >> x;

	float x2 = multiply(x, x);
	float x4 = multiply(x2, x2);
	float x8 = multiply(x4, x4);
	float x16 = multiply(x8, x8);
	float x32 = multiply(x16, x16);

	cout << "x32 = " << x32;
	return 0;
}

float multiply(float xx, float yy)
{
	return xx * yy;
}