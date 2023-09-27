#include <iostream>
using namespace std;
int timHangTram(int);

int main()
{
	cout << "Nhap n = ";
	int n;
	cin >> n;

	int ht;
	ht = timHangTram(n);
	cout << "ht = " << ht;

	return 0;
}

int timHangTram(int x)
{
	return x / 100 % 10;
}