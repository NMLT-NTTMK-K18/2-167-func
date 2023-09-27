#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
using namespace std;
float tinhChuViDaGiacDeuNoiTiepDuongTron(float, int);

int main()
{
	cout << "Nhap r = ";
	float r;
	cin >> r;

	cout << "Nhap n = ";
	int n;
	cin >> n;

	float p;
	p = tinhChuViDaGiacDeuNoiTiepDuongTron(r, n);
	cout << "Chu vi da giac deu noi tiep trong duong trong ban kinh " << r << " = " << p;

	return 0;
}

float tinhChuViDaGiacDeuNoiTiepDuongTron(float rr, int nn)
{
	return 2 * nn * rr * sin(M_PI / nn);
}