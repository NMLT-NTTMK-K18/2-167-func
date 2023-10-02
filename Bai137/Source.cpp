#include<iostream>
using namespace std;
void Nhap(float& x);
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

	if (xx >= 5)
		f = 2 * xx * xx + 5 * xx + 9;
	else
		f = -2 * xx * xx + 4 * xx - 9;
	return f;
}