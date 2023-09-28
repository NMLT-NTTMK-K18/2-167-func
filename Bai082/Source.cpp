#include <iostream>
#include <cmath>
using namespace std;
float tinhS(float, int);

int main()
{
	cout << "Nhap x = ";
	float x;
	cin >> x;

	cout << "Nhap n = ";
	int n;
	cin >> n;

	float s;
	s = tinhS(x, n);

	cout << "s = " << s;

	return 0;
}

float tinhS(float xx, int nn)
{
	float s = 0;
	float t = 1;
	int i = 1;
	while (i <= nn)
	{
		t = t * sin(xx);
		s = s + t;
		i = i + 1;
	}
	return s;
}