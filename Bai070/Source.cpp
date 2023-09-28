#include <iostream>
using namespace std;
int tinhS(int, int);

int main()
{
	cout << "Nhap x = ";
	int x;
	cin >> x;

	cout << "Nhap n = ";
	int n;
	cin >> n;

	int s;
	s = tinhS(x, n);

	cout << "s = " << s;

	return 0;
}

int tinhS(int xx, int nn)
{
	int s = 0;
	int t = 1;
	int i = 2;
	while (i <= 2 * nn)
	{
		t = t * xx * xx;
		s = s + t;
		i = i + 2;
	}
	return s;
}