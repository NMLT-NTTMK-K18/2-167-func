#include<iostream>
#include<cmath>
using namespace std;
float Xuly();

int main()
{
	cout << "pi = " << Xuly();
	return 0;
}

float Xuly()
{
	float s = 3;
	int dau = 1;
	float e = 3;
	int i = 2;

	while (e >= pow(10, -6))
	{
		e = (float)4 / (i * (i + 1) * (i + 2));
		s = s + dau * e;
		dau = -dau;
		i = i + 2;
	}
	return s;
}