#include <iostream>
using namespace std;
float tinhS(int, int);

int main()
{
	cout << "Nhap n = ";
	int n;
	cin >> n;

	float s;
	s = tinhS(n, n);

	cout << "s = " << s;

	return 0;
}

float tinhS(int xx, int nn)
{
	float s = 0;
	float t = 1;
	int i = 1;
	while (i <= nn)
	{
		t = t * i;
		s = s + i * t;
		i = i + 1;
		;
	}
	return s;
}