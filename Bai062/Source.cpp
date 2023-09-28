#include <iostream>
using namespace std;
int tinhTongCacChuSoChan(int);

int main()
{
	cout << "Nhap n = ";
	int n;
	cin >> n;

	int s;
	s = tinhTongCacChuSoChan(n);

	cout << "s = " << s;

	return 0;
}

int tinhTongCacChuSoChan(int nn)
{
	int ss = 0;
	int t = nn;
	while (t != 0)
	{
		int dv = t % 10;
		if (dv % 2 == 0)
			ss = ss + dv;
		t = t / 10;
	}
	return ss;
}