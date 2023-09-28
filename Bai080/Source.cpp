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
	s = tinhS(x, n);

	cout << "s = " << s;

	return 0;
}

float tinhS(int xx, int nn)
{
	float s = 1;
	float t = 1;
	int i = 1;
	while (i <= nn)
	{
		t = t * xx;
		s = s + (i + 1) * t;
		i = i + 1;
	}
	return s;
}