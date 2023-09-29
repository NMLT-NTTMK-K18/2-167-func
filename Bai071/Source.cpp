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
	float s = xx;
	float t = xx;
	int i = 3;
	while (i <= 2 * nn + 1)
	{
		t = t * xx * xx;
		s = s + t;
		i = i + 2;
	}
	return s;
}