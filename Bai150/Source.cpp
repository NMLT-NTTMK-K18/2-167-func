#include<iostream>
using namespace std;
void Nhap(int&, int&);
int Xuly(int, int);

int main()
{
	int a, b;
	Nhap(a, b);
	cout << "BCNN = " << Xuly(a, b);
	return 0;
}

void Nhap(int& aa, int& bb)
{
	cout << "Nhap a = ";
	cin >> aa;

	cout << "Nhap b = ";
	cin >> bb;

}

int Xuly(int aa, int bb)
{
	int m = abs(aa);
	int n = abs(bb);

	while (m * n != 0)
	{
		if (m > n)
			m = m - n;
		else
			n = n - m;
	}

	int bcnn = abs(aa * bb) / (m + n);
	return bcnn;
}