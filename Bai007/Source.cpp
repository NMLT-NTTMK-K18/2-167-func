#include <iostream>
using namespace std;
float chuyenDoC(float);

int main()
{
	cout << "Nhap F = ";
	float F;
	cin >> F;

	float C = ((float)5 / 9) * (F - 32);
	cout << "Do C = " << C;

	return 0;
}

float chuyenDoC(float FF)
{
	return (float)5 / 9 * (FF - 32);
}