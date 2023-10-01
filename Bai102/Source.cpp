#include<iostream>
#include<cmath>
using namespace std;
float Xuly();

int main()
{
	float i = 2;
	cout << "s = " << Xuly();
	return 0;
}

float Xuly()
{
	float s = 0;
	float e = 0.5;
	int i = 2;

	while (e >= pow(10, -6))
	{
		e = (float)1 / i;
		s = s + e;
		i = i + 2;
	}
	return s;
}