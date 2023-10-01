#include<iostream>
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
	int ahh;
	int att = 1;
	int at = 2;
	int i = 2;

	while (i <= nn)
	{
		ahh = 4 * at + att;
		i = i + 1;
		att = at;
		at = ahh;
	}
	if (nn < 1)
	{
		at = 1;
	}
	return at;
}