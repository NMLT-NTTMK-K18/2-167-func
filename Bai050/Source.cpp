#include <iostream>
using namespace std;
int tinhTongCacUocSo(int);

int main()
{
	cout << "Nhap n = ";
	int n;
	cin >> n;

	int s;
	s = tinhTongCacUocSo(n);

	cout << "s = " << s;

	return 0;
}

int tinhTongCacUocSo(int nn)
{
	int ss = 0;
	int i = 1;
	while (i <= nn)
	{
		if (nn % i == 0)
			ss = ss + i;
		i = i + 1;
	}
	return ss;
}