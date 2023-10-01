#include<iostream>
#include<iomanip>
using namespace std;
void Nhap(float&, float&);
float Xulya(float, float);
float Xulyb(float, float);

int main()
{
	float a, b;
	Nhap(a, b);
	cout << "Gia tri tang dan la: " << Xulya(a, b)<<setw(4)<< Xulyb(a, b);
	return 0;
}

void Nhap(float& aa, float& bb)
{
	cout << "Nhap a = ";
	cin >> aa;
	cout << "Nhap b = ";
	cin >> bb;
}

float Xulyb(float aa, float bb)
{
	float temp;

	if (aa > bb)
		temp = aa;
	else
		temp = bb;
	return temp;
}

float Xulya(float aa, float bb)
{
	float temp;

	if (aa < bb)
		temp = aa;
	else
		temp = bb;
	return temp;
}