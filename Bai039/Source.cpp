#include <iostream>
using namespace std;
float tinhS(int);

int main()
{
	cout << "Nhap n = ";
	int n;
	cin >> n;

	float t;
	t = tinhS(n);

	cout << "t = " << t;

	return 0;
}

float tinhS(int nn)
{
	float tt = 1;
	int i = 1;
	while (i <= nn)
	{
		tt = tt * (1 + (float)1 / (i * i));
		i = i + 1;
	}
	return tt;
}