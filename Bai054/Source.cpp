#include <iostream>
using namespace std;
int tinhTongCacUocSoChan(int);

int main()
{
	cout << "Nhap n = ";
	int n;
	cin >> n;

	int s;
	s = tinhTongCacUocSoChan(n);

	cout << "s = " << s;

	return 0;
}

int tinhTongCacUocSoChan(int nn)
{
	int ss = 0;
	int i = 2;
	while (i <= nn)
	{
		if (nn % i == 0)
			ss = ss + i;
		i = i + 2;
	}
	return ss;
}