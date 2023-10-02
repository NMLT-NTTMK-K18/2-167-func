#include<iostream>
#include<cmath>
using namespace std;
void Nhap(int&);
int Xuly(int);

int main()
{
	int n;
	Nhap(n);
	cout << "dt = " << Xuly(n);
	return 0;
}

void Nhap(int& nn)
{
	int n;
	cout << "Nhap n: ";
	cin >> nn;
}

int Xuly(int nn)
{
	int dt = abs(nn);

	while (dt >= 10)
		dt = dt / 10;
	return dt;
}


