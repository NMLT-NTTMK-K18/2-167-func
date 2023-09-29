#include<iostream>
#include<cmath>
using namespace std;
void Nhap(float&, int&);
float Xuly(float&, int&);

int main()
{
	float x;
	int n;
	Nhap(x,n);
	cout << "s = " << Xuly(x,n);
	return 0;
}
void Nhap(float& xx, int& nn)
{
	cout << "Nhap x = ";
	cin >> xx;
	cout << "Nhap n =";
	cin >> nn;
}
float Xuly(float& xx, int& nn)
{
	float s = 0;
	int t = 1;
	int i = 1;

	while (i <= nn)
	{
		t = t * xx;
		s = sqrt(t + s);
		i = i + 1;
	}
	return s;
}