#include<iostream>
using namespace std;
void Nhap(float&, float&, float&);
int Xuly(float, float, float);

int main()
{
	float x, y, z;
	Nhap(x, y, z);
	if (Xuly(x, y, z) == 1)
		cout << "BDT dung";
	else
		cout << "BDT sai";
	return 0;
}

void Nhap(float& xx, float& yy, float& zz)
{
	cout << "Nhap x: ";
	cin >> xx;

	cout << "Nhap y: ";
	cin >> yy;

	cout << "Nhap z: ";
	cin >> zz;
}
int Xuly(float xx, float yy, float zz)
{
	if ((xx <= yy) && (yy <= zz))
		return 1;
	else
		return 0;
}
