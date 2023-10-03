#include<iostream>
using namespace std;
void Nhap(int&);
int Xuly(int);

int main()
{
	int n;
	Nhap(n);
	cout << "So luong chu so dau tien cua so nguyen duong " << n << " la : " << Xuly(n);
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
	int dt = nn;

	while (dt >= 10)
		dt = dt / 10;

	int dem = 0;
	int t = nn;
	int dv;

	while (t != 0)
	{
		dv = t % 10;
		if (dv == dt)
			dem++;
		t = t / 10;
	}
	return dem;
}
