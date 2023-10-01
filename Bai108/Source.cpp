#include<iostream>
#include<cmath>
using namespace std;
void Nhap(float&);
float Xuly(float);

int main()
{
	int x;
	cout << "Nhap x: ";
	cin >> x;
	cout << "s = " << Xuly(x);
	return 0;
}
void Nhap(float& xx)
{
	cout << " Nhap x = ";
	cin >> xx;
}

float Xuly(float xx)
{
	float s = 1;
	int t = 1;
	int m = 1;
	int i = 1;
	float e = 1;

	while (e >= pow(10, -6))
	{
		t = t * xx;
		m = m * i;
		e = (float)t / m;
		s = s + e;
		i = i + 1;
	}
	return s;
}