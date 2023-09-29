#include <iostream>
using namespace std;
int demSoLuongUocSo(int);

int main()
{
	cout << "Nhap n = ";
	int n;
	cin >> n;

	int dem;
	dem = demSoLuongUocSo(n);

	cout << "So luong uoc so = " << dem;

	return 0;
}

int demSoLuongUocSo(int nn)
{
	int dem = 0;
	int i = 1;
	while (i <= nn)
	{
		if (nn % i == 0)
			dem++;
		i = i + 1;
	}
	return dem;
}