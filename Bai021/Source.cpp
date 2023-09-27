#include <iostream>
using namespace std;
float multiply(float, float);
float divide(float, float);

int main()
{
	cout << "Nhap x = ";
	float x;
	cin >> x;

	float x2 = multiply(x, x);
	float x4 = multiply(x2, x2);
	float x8 = multiply(x4, x4);
	float x16 = multiply(x8, x8);
	float x15 = divide(x16, x);
	cout << "x15 = " << x15;

	return 0;
}

float multiply(float xx, float yy)
{
	return xx * yy;
}

float divide(float xx, float yy)
{
	return xx / yy;
}