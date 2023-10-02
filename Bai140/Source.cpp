#include <iostream>
#include <cmath>
using namespace std;
void Nhap(float &, float &, float &);
void Xuly(float, float, float);

int main()
{
	float a, b, c;
	Nhap(a, b, c);
	Xuly(a, b, c);
	return 0;
}
void Nhap(float &aa, float &bb, float &cc)
{
	cout << "Nhap a: ";
	cin >> aa;

	cout << "Nhap b: ";
	cin >> bb;

	cout << "Nhap c: ";
	cin >> cc;
}

void Xuly(float aa, float bb, float cc)
{
	float delta = bb * bb - 4 * aa * cc;
	float x;
	float x1;
	float x2;

	if (delta <= 0)
		if (delta == 0)
		{
			x = -bb / (2 * aa);
			cout << "x = " << x;
		}
		else
			cout << "Vo nghiem";
	else
	{
		x1 = (-bb + sqrt(delta)) / (2 * aa);
		x2 = (-bb - sqrt(delta)) / (2 * aa);
		cout << "x1 = " << x1 << endl;
		cout << "x2 = " << x2 << endl;
	}
}