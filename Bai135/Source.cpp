#include<iostream>
using namespace std;
void Nhap(int&);
int Xuly(int);

int main()
{
	int x;
	Nhap(x);
	if (Xuly(x) == 1)
		cout << "Nam nhuan";
	else
		cout << "Nam khong nhuan";
	return 0;
}

void Nhap(int& xx)
{
	cout << "Nhap x: ";
	cin >> xx;
}

int Xuly(int xx)
{
	int n = xx;

	if (((n % 4 == 0) && (n % 100 != 0)) || (n % 400 == 0))
		return 1;
	else
		return 0;
}
