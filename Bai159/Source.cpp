#include<iostream>
using namespace std;
void Nhap(int&);
int Xuly(int);

int main()
{
	int n;
	Nhap(n);
	cout << "So luong chu so nho nhat cua so nguyen duong " << n << "la : " << Xuly(n);
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
	int lc = nn % 10;
	int dem = 0;
	int t = nn;
	int dv;

	while (t != 0)
	{
		dv = t % 10;
		if (dv < lc)
			lc = dv;
		t = t / 10;
	}

	t = nn;

	while (t != 0)
	{
		dv = t % 10;
		if (dv == lc)
			dem = dem + 1;
		t = t / 10;
	}
	return dem;
}
