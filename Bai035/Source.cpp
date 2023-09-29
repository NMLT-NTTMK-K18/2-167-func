#include <iostream>
using namespace std;
int tinhT(int);

int main()
{
	cout << "Nhap n = ";
	int n;
	cin >> n;

	float t;
	t = tinhT(n);

	cout << "t = " << t;

	return 0;
}

int tinhT(int nn)
{
	float tt = 1;
	int i = 1;
	while (i <= nn)
	{
		tt = tt * i;
		i = i + 1;
	}
	return tt;
}