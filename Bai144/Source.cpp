#include<iostream>
using namespace std;
void Nhap(int&);
int Xuly(int);

int main()
{
	int n;
	Nhap(n);
	if (Xuly(n) == 1)
		cout << "nguyen to";
	else
		cout << "khong la so nguyen to";
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
	int dem = 0;
	int i = 1;

	while (i <= nn)
	{
		if (nn % i == 0)
			dem++;
		i = i + 1;
	}

	if (dem == 2)
		return 1;
	else
		return 0;
}

