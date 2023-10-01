#include<iostream>
#include<cmath>
using namespace std;
void Nhap(int&);
float Xuly(int);

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
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
	float ahh;
	float at = 2;
	int i = 2;

	while (i <= nn)
	{
		ahh = 5 * at + sqrt(24 * at * at - 8);
		i = i + 1;
		at = ahh;
	}
	return at;
}