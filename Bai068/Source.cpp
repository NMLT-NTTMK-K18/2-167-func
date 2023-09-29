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
	int s = 0;
	int t = 1;
	int i = 1;
	while (i <= nn)
	{
		t = t * i;
		s = s + t;
		i = i + 1;
	}
	return s;
}