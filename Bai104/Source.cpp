#include<iostream>
#include<cmath>
using namespace std;
float Xuly();

int main()
{
	cout << "s = " << Xuly();
	return 0;
}

float Xuly()
{
	float s = 0;
	float e = 0.5;
	int i = 1;

	while (e >= pow(10, -6))
	{
		e = (float)1 / (i * (i + 1));
		s = s + e;
		i = i + 1;
	}
	return s;
}