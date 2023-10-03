#include<iostream>
using namespace std;
void Nhap(int&);
int Xuly(int);

int main()
{
	int n;
	Nhap(n);
	cout << "k = " << Xuly(n);
	return 0;
}

void Nhap(int& nn)
{
	int n;
	cout << "Nhap n: ";
	cin >> nn;
}

int Xuly(int nn)
{
	int s = 0;
	int k = 0;

	if (s + k + 1 < nn)
	{
		k = k + 1;
		s = s + k;
	}
	return k;
}
