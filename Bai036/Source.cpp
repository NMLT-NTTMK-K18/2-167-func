#include <iostream>
using namespace std;
int tinhT(int, int);

int main()
{
	float x;
	cout << "Nhap x = ";
	cin >> x;

	int n;
	cout << "Nhap n = ";
	cin >> n;

	float t;
	t = tinhT(x, n);

	cout << "t = " << t;

	return 0;
}

int tinhT(int xx, int nn)
{
	int tt = 1;
	int i = 1;
	while (i <= nn)
	{
		tt = tt * xx;
		i = i + 1;
	}
	return tt;
}