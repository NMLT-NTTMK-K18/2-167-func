#include<iostream>
using namespace std;
void Nhap(int&);
int Xuly(int);

int main()
{
	int n;
	Nhap(n);
	cout << "Uoc so le lon nhat cua so nguyen duong " << n << " la: "<<Xuly(n);
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
	int t = nn;

	while (t % 2 == 0)
		t = t / 2;

	return t;
}
