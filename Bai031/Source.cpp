#include <iostream>
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
	while (i <= 2 * nn + 1)
	{
		ss = ss + (float)1 / i;
		i = i + 2;
	}
	return ss;
}