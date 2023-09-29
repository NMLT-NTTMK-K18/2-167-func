#include <iostream>
#include <iomanip>
using namespace std;
int tinhTichCacUocSoLe(int);

int main()
{
	cout << "Nhap n = ";
	int n;
	cin >> n;

	int t;
	t = tinhTichCacUocSoLe(n);

	cout << "t = " << t;

	return 0;
}

int tinhTichCacUocSoLe(int nn)
{
	int tt = 1;
	int i = 1;
	while (i <= nn)
	{
		if (nn % i == 0)
			tt = tt * i;
		i = i + 2;
	}
	return tt;
}