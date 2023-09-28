#include <iostream>
using namespace std;
int demSoLuongUocSoChan(int);

int main()
{
	cout << "Nhap n = ";
	int n;
	cin >> n;

	int dem;
	dem = demSoLuongUocSoChan(n);

	cout << "So luong uoc so = " << dem;

	return 0;
}

int demSoLuongUocSoChan(int nn)
{
	int dem = 0;
	int i = 2;
	while (i <= nn)
	{
		if (nn % i == 0)
			dem++;
		i = i + 2;
	}
	return dem;
}