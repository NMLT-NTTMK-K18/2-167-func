#include<iostream>
using namespace std;
void Nhap(int&);
float Xuly(int);

int main()
{
	int n;
	Nhap(n);
	cout << "s = " << Xuly(n);
	return 0;
}

void Nhap(int& nn)
{
	cout << " Nhap n = ";
	cin >> nn;
}

float Xuly(int nn)
{
	int ahh;
	int att = 1;
	int at = 1;
	int i = 2;

	while (i <= nn)
	{
		ahh = at + att;
		i = i + 1;
		att = at;
		at = ahh;
	}
	return at;
}
