#include <iostream>
using namespace std;
float chuyenDoF(float);

int main()
{
	cout << "Nhap do C = ";
	float C;
	cin >> C;

	float F;
	F = chuyenDoF(C);
	cout << "Do F = " << F;

	return 0;
}

float chuyenDoF(float CC)
{
	return (float)9 / 5 * CC + 32;
}