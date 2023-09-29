#include <iostream>
#include <cmath>
using namespace std;
float tinhS(int);

int main()
{
	cout << "Nhap n = ";
	int n;
	cin >> n;

	float s;
	s = tinhS(n);

	cout << "s = " << s;

	return 0;
}

float tinhS(int nn)
{
	float ss = 0;
	int i = 1;
	while (i <= nn)
	{
		ss = ss + pow(i, 4);
		i = i + 1;
	}
	return ss;
}