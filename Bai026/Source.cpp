#include <iostream>
using namespace std;
void traoDoiViTri(int &, int &);

int main()
{
	int a, b;
	cout << "Nhap a = ";
	cin >> a;
	cout << "Nhap b = ";
	cin >> b;
	traoDoiViTri(a, b);

	cout << "a = " << a << endl;
	cout << "b = " << b;

	return 0;
}

void traoDoiViTri(int &x, int &y)
{
	x = x + y;
	y = x - y;
	x = x - y;
}