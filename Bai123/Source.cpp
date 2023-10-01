#include <iostream>
using namespace std;
void Nhap(int&);
float Xuly(int);
float Xulybh(int);

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	cout << "ah = " << Xuly(n) << endl;
	cout << "bh = " << Xulybh(n);
	return 0;
}

void Nhap(int& nn)
{
	cout << " Nhap n = ";
	cin >> nn;
}

float Xuly(int nn)
{
	int ahh;
	int bhh;
	int at = 2;
	int bt = 1;
	int i = 2;

	while (i <= nn)
	{
		ahh = 3 * bt + 2 * at;
		bhh = at + 3 * bt;
		i = i + 1;
		at = ahh;
		bt = bhh;
	}
	return at;
}

float Xulybh(int nn)
{
	int ahh;
	int bhh;
	int at = 2;
	int bt = 1;
	int i = 2;

	while (i <= nn)
	{
		ahh = 3 * bt + 2 * at;
		bhh = at + 3 * bt;
		i = i + 1;
		at = ahh;
		bt = bhh;
	}
	return bt;
}
