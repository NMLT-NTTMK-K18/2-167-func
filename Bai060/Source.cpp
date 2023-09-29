#include <iostream>
using namespace std;
int tinhTichCacChuSo(int);

int main()
{
	cout << "Nhap n = ";
	int n;
	cin >> n;

	int tich;
	tich = tinhTichCacChuSo(n);

	cout << "Tich cac chu so cua so nguyen duong " << n << " la: " << tich;

	return 0;
}

int tinhTichCacChuSo(int nn)
{
	int tich = 1;
	int t = nn;
	while (t != 0)
	{
		int dv = t % 10;
		tich = tich * dv;
		t = t / 10;
	}
	return tich;
}