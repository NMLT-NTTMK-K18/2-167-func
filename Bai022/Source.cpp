#include <iostream>
using namespace std;
int timDonVi(int);

int main()
{
	cout << "Nhap n = ";
	int n;
	cin >> n;

	int dv;
	dv = timDonVi(n);
	cout << "dv = " << dv;

	return 0;
}

int timDonVi(int x)
{
	return x % 10;
}