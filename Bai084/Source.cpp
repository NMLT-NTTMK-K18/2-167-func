#include<iostream>
#include<cmath>
using namespace std;
void Nhap(float&, int&);
float Xuly(float&, int&);
void Xuat(float, int);

int main()
{
	float x;
	int n;
	Nhap(x, n);
	Xuat(x, n);
	cout <<"s="<<Xuly(x,n);
}
void Nhap(float& xx, int& nn)
{
	cout << "Nhap x=";
	cin >> xx;
	cout << "Nhap n=";
	cin >> nn;
}
float Xuly(float& xx, int& nn)
{
	float s = 0;
	float t = xx;
	int i = 1;
	while (i <= nn)
	{
		t = sin(t);
		s = s + t;
		i = i + 1;
	}
	return s;
}

void Xuat(float xx,int nn)
{
	cout << "x=" << xx<<endl;
	cout << "n=" << nn<<endl;
}
