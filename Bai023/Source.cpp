#include <iostream>
using namespace std;
int timHangChuc(int);

int main()
{
	cout << "Nhap n = ";
	int n;
	cin >> n;

	int hc;
	hc = timHangChuc(n);
	cout << "hc = " << hc;

	return 0;
}

int timHangChuc(int x)
{
	return x / 10 % 10;
}