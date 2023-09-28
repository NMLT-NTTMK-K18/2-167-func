#include <iostream>
using namespace std;
int tinhTichCacUocSo(int);

int main()
{
	cout << "Nhap n = ";
	int n;
	cin >> n;

	int t;
	t = tinhTichCacUocSo(n);

	cout << "t = " << t;

	return 0;
}

int tinhTichCacUocSo(int nn)
{
	int tt = 1;
	int i = 1;
	while (i <= nn)
	{
		if (nn % i == 0)
			tt = tt * i;
		i = i + 1;
	}
	return tt;
}