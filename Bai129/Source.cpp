#include <iostream>
#include <iomanip>
using namespace std;
void Nhap(float &, float &, float &);
void XuLy(float &, float &, float &);

int main()
{
	float a, b, c;
	Nhap(a, b, c);
	XuLy(a, b, c);

	cout << "Gia tri tang dan la:" << a << " " << b << " " << c;

	return 0;
}

void Nhap(float &aa, float &bb, float &cc)
{
	cout << "Nhap a = ";
	cin >> aa;
	cout << "Nhap b = ";
	cin >> bb;
	cout << "Nhap c = ";
	cin >> cc;
}

void XuLy(float &aa, float &bb, float &cc)
{
	float temp;

	if (aa > bb)
	{
		temp = aa;
		aa = bb;
		bb = temp;
	}

	if (aa > cc)
	{
		temp = aa;
		aa = cc;
		cc = temp;
	}

	if (bb > cc)
	{
		temp = bb;
		bb = cc;
		cc = temp;
	}
}