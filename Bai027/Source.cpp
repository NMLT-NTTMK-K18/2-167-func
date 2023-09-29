#include <iostream>
using namespace std;
int tinhS(int);

int main()
{
	cout << "Nhap n = ";
	int n;
	cin >> n;

	int s;
	s = tinhS(n);

	cout << "s = " << s;

	return 0;
}

int tinhS(int nn)
{
	int ss = 0;
	int i = 1;
	while (i <= nn)
	{
		ss = ss + i;
		i = i + 1;
	}
	return ss;
}