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
	float x16 = multiply(x8, x8);
	float x32 = multiply(x16, x16);
	float x64 = multiply(x32, x32);

	cout << "x64 = " << x64;

	return 0;
}

float multiply(float xx, float yy)
{
	return xx * yy;
}