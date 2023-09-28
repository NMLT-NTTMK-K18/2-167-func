#include <iostream>
using namespace std;
int tongChuSo(int);

int main()
{
	cout << "Nhap n = ";
	int n;
	cin >> n;

	int s;
	s = tongChuSo(n);

	cout << "s = " << s;

	return 0;
}

int tongChuSo(int nn)
{
	int ss = 0;
	int t = nn;
	while (t != 0)
	{
		int dv = t % 10;
		ss = ss + dv;
		t = t / 10;
	}
	return ss;
}