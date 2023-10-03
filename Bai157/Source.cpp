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
	float s = 0;
	int i = 1;

	while (i <= nn)
	{
		s = s + (float)1 / i;
		cout << s << " ";
		i = i + 1;
	}
}
