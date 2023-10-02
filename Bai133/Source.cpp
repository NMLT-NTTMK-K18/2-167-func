#include <iostream>
using namespace std;
void Nhap(float &, float &, float &);
int Xuly(float, float, float);
int main()
{
	float x, y, z;
	Nhap(x, y, z);
	if (Xuly(x, y, z) == 0)
		cout << "Khong la tam giac";
	if (Xuly(x, y, z) == 1)
		cout << "Tam giac deu";
	if (Xuly(x, y, z) == 2)
		cout << "Tam giac vuong can";
	if (Xuly(x, y, z) == 3)
		cout << "Tam giac vuong";
	if (Xuly(x, y, z) == 4)
		cout << "Tam giac can";
	if (Xuly(x, y, z) == 5)
		cout << "Tam giac thuong";
	return 0;
}

void Nhap(float &xx, float &yy, float &zz)
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
	if ((xx + yy > zz) && (xx + zz > yy) && (yy + zz > xx))
		if (xx == yy && yy == zz)
			return 1;
		else if ((xx * xx == yy * yy + zz * zz) || (yy * yy == xx * xx + zz * zz) || (zz * zz == xx * xx + yy * yy))
			if ((xx == yy) || (yy == zz) || (zz == xx))
				return 2;
			else
				return 3;
		else if ((xx == yy) || (yy == zz) || (zz == xx))
			return 4;
		else
			return 5;
	else
		return 0;
}