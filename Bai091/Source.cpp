#include<iostream>
using namespace std;
void Nhap(float&, int&);
float Xuly(float, int);

int main()
{
	float x;
	int n;
	Nhap(x, n);
	cout << "s = " << Xuly(x, n);
	return 0;
}
void Nhap(float& xx, int& nn)
{
	cout << "Nhap x = ";
	cin >> xx;
	cout << "Nhap n =";
	cin >> nn;
}
float Xuly(float xx, int nn)
{
	float s = -1;
	float t = 1;
	int m = 1;
	int i = 2;
	int dau = 1;

	while (i <= 2 * nn)
	{
		t = t * xx * xx;
		m = m * i * (i - 1);
		s = s + dau * t / m;
		i = i + 2;
		dau = -dau;
	}
	return s;
}