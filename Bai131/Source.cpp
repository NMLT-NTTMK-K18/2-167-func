#include <iostream>
#include <cmath>
using namespace std;
void Nhap(float &, float &, float &, float &, float &, float &);
int Xuly(float, float, float, float, float, float);

int main()
{
	float xa, ya, xb, yb, xc, yc;
	Nhap(xa, ya, xb, yb, xc, yc);
	if (Xuly(xa, ya, xb, yb, xc, yc) == 1)
		cout << "La tam giac";
	else
		cout << "Khong la tam giac";
	return 0;
}

void Nhap(float &xa, float &ya, float &xb, float &yb, float &xc, float &yc)
{
	cout << "Nhap xA: ";
	cin >> xa;

	cout << "Nhap yA: ";
	cin >> ya;

	cout << "Nhap xB: ";
	cin >> xb;

	cout << "Nhap yB: ";
	cin >> yb;

	cout << "Nhap xC: ";
	cin >> xc;

	cout << "Nhap yC: ";
	cin >> yc;
}

int Xuly(float xa, float ya, float xb, float yb, float xc, float yc)
{
	float a = sqrt(pow(xb - xa, 2) + pow(yb - ya, 2));
	float b = sqrt(pow(xc - xa, 2) + pow(yc - ya, 2));
	float c = sqrt(pow(xc - xb, 2) + pow(yc - yb, 2));

	if ((a + b > c) && (a + c > b) && (b + c > a))
		return 1;
	else
		return 0;
}
