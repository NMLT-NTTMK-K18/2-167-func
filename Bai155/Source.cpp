#include<iostream>
using namespace std;
void Nhap(int&);
void Xuly(int);

int main()
{
	int n;
	Nhap(n);
	Xuly(n);

	return 0;
}

void Nhap(int& nn)
{
	int n;
	cout << "Nhap n: ";
	cin >> nn;
}

void Xuly(int nn)
{
	int t = 1;
	int i = 0;

	while (i <= nn)
	{
		t = t * 2;
		cout << t << " ";
		i = i + 1;
	}
}