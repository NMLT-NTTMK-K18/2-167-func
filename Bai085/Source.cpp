#include<iostream>
using namespace std;
void Nhap(float&, int&);
float Xuly(float&, int&);

int main()
{
	float x;
	int n;
	Nhap(x, n);
	cout << "s = " << Xuly(x, n);

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
	int dau = 1;
	while (i <= nn)
	{
		t = t * xx;
		s = s + dau * t;
		i = i + 1;
		dau = -dau;
	}
	return s;
}