#include<iostream>
using namespace std;
void Nhap(float&, float&);
float Xuly(float, float);

int main()
{
	float a, b;
	Nhap(a, b);
	cout << "Gia tri nho nhat la: " << Xuly(a, b);
	return 0;
}

void Nhap(float& aa, float& bb)
{
	cout << "Nhap a = ";
	cin >> aa;
	cout << "Nhap b = ";
	cin >> bb;
}

float Xuly(float aa, float bb)
{
	float lc = aa;

	if (lc > bb)
		lc = bb;
	return lc;
}