#include <iostream>
using namespace std;
int demSoLuongChuSoLe(int);

int main()
{
	cout << "Nhap n = ";
	int n;
	cin >> n;

	int dem;
	dem = demSoLuongChuSoLe(n);

	cout << "So luong chu so le cua so nguyen duong " << n << " la: " << dem;

	return 0;
}

int demSoLuongChuSoLe(int nn)
{
	int dem = 0;
	int t = nn;
	while (t != 0)
	{
		int dv = t % 10;
		if (dv % 2 != 0)
			dem = dem + 1;
		t = t / 10;
	}
	return dem;
}