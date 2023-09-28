#include <iostream>
#include <cmath>
using namespace std;
float tinhS(int, int);

int main()
{
	cout << "Nhap k = ";
	int k;
	cin >> k;

	cout << "Nhap n = ";
	int n;
	cin >> n;

	int s;
	s = tinhS(k, n);

	cout << "s = " << s;

	return 0;
}

float tinhS(int kk, int nn)
{
	float s = 0;
	int i = 1;
	while (i <= nn)
	{
		s = s + pow(i, kk);
		i = i + 1;
	}
	return s;
}