#include <iostream>
using namespace std;
int tinhTichCacChuSoLe(int);

int main()
{
	cout << "Nhap n = ";
	int n;
	cin >> n;

	int tich;
	tich = tinhTichCacChuSoLe(n);

	cout << "Tich cac chu so le cua so nguyen duong " << n << " la: " << tich;

	return 0;
}

int tinhTichCacChuSoLe(int nn)
{
	int tich = 1;
	int t = nn;
	while (t != 0)
	{
		int dv = t % 10;
		if (dv % 2 != 0)
			tich = tich * dv;
		t = t / 10;
	}
	return tich;
}