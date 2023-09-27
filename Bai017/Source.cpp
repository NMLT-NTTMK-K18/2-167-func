#include <iostream>
using namespace std;
float multiply(float, float);

int main()
{
	cout << "Nhap x = ";
	float x;
	cin >> x;

	float x2 = multiply(x, x);
	float x4 = multiply(x2, x2);
	float x8 = multiply(x4, x4);
	float x10 = multiply(x8, x2);
	float x11 = multiply(x10, x);
	cout << "x11 = " << x11;

	return 0;
}

float multiply(float xx, float yy)
{
	return xx * yy;
}