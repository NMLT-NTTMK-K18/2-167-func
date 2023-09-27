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
	float x6 = multiply(x4, x2);
	float x8 = multiply(x4, x4);
	float x14 = multiply(x8, x6);
	cout << "x14 = " << x14;

	return 0;
}

float multiply(float xx, float yy)
{
	return xx * yy;
}