#include <iostream>
using namespace std;
float tinhS(int, int);

int main()
{
	cout << "Nhap x = ";
	int x;
	cin >> x;

	cout << "Nhap n = ";
	int n;
	cin >> n;

	float s;

	cout << "s = " << s;

	return 0;
}

float tinhS(int xx, int nn)
{
	float s = 0;
	int m = 1;
	int i = 0;
	while (i <= nn)
	{
		m = m * (xx + i);
		s = s + (float)1 / m;
		i = i + 1;
	}
	return s;
}