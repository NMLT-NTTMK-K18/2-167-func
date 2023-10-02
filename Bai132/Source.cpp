#include <iostream>
#include <cmath>
using namespace std;
void Nhap(float&, float&, float&, float&, float&, float&,float&,float&);
int Xuly(float, float, float, float, float, float,float,float);

int main()
{
	float xm,ym,xa, ya, xb, yb, xc, yc;
	Nhap(xa, ya, xb, yb, xc, yc,xm,ym);

	if (Xuly(xa, ya, xb, yb, xc, yc,xm,ym) == 1)
		cout << "M trong";
	else
		cout << "M ngoai";
	return 0;
}

void Nhap(float& xa, float& ya, float& xb, float& yb, float& xc, float& yc,float& xM,float& yM)
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

	cout << "Nhap xM: ";
	cin >> xM;

	cout << "Nhap yM: ";
	cin >> yM;
}

int Xuly(float xA, float yA, float xB, float yB, float xC, float yC,float xM,float yM)
{
	float SABC = abs(xA * yB + xB * yC + xC * yA - xB * yA - xC * yB - xA * yC) / 2;
	float SMAB = abs(xA * yB + xB * yM + xM * yA - xB * yA - xM * yB - xA * yM) / 2;
	float SMBC = abs(xM * yB + xB * yC + xC * yM - xB * yM - xC * yB - xM * yC) / 2;
	float SMAC = abs(xA * yM + xM * yC + xC * yA - xM * yA - xC * yM - xA * yC) / 2;
	float S = SMAB + SMBC + SMAC;
	if (S == SABC)
		return 1;
	else
		return 0;
}
