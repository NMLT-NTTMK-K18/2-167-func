#include<iostream>
#include<cmath>
using namespace std;
void Nhap(int&);
float Xuly(int);

int main()
{
	int n;
	Nhap(n);
	cout << "pi = " << Xuly(n);
	return 0;
}

void Nhap(int& nn)
{
	cout << "Nhap n = ";
	cin >> nn;
}

float Xuly(int)
{
	float s = 0;
	int dau = 1;
	float e = 4;
	int i = 1;
	while (e >= pow(10, -6))
	{
		e = (float)4 / i;
		s = s + dau * e;
		i = i + 2;
		dau = -dau;
	}
	return s;
}
