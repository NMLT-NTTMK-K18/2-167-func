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
	int at = 2;
	int i = 2;

	while (i <= nn)
	{

		ahh = at + 2 * i + 1;
		i = i + 1;
		at = ahh;
	}
	return at;
}