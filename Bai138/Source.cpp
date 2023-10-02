#include<iostream>
using namespace std;
void Nhap(float&);
float Xuly(float);

int main()
{
	float x;
	Nhap(x);
	cout << "f = " << Xuly(x);
	return 0;
}

void Nhap(float& xx)
{
	cout << "Nhap x: ";
	cin >> xx;
}

float Xuly(float xx)
{
	float f;

	if (xx >= 0)
		if (xx <= 1)
			f = 5 * xx - 7;
		else
			f = 2 * xx * xx * xx + 5 * xx - 8 * xx + 3;
	else
		f = -2 * xx * xx * xx + 6 * xx + 9;
	return f;
}