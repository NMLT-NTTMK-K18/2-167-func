#include <iostream>
using namespace std;
int demSoChuSo(int);

int main()
{
	cout << "Nhap n = ";
	int n;
	cin >> n;

	int dem;
	dem = demSoChuSo(n);

	cout << "So luong chu so cua so nguyen duong " << n << " la: " << dem;

	return 0;
}

int demSoChuSo(int nn)
{
	int dem = 0;
	int t = nn;
	while (t != 0)
	{
		dem = dem + 1;
		t = t / 10;
	}
	return dem;
}