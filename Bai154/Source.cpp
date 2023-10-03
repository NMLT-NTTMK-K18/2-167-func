#include<iostream>
using namespace std;
void Nhap(int&);
void Xuly(int);

int main()
{
	int n;
	Nhap(n);
	Xuly(n);
	return 0;
}

void Nhap(int& nn)
{
	int n;
	cout << "Nhap n: ";
	cin >> nn;
}

void Xuly(int nn)
{
	int ahh = nn;

	while (ahh != 1)
	{
		if (ahh % 2 == 0)
			ahh = ahh / 2;
		else
			ahh = 3 * ahh + 1;
		cout << "ahh = " << ahh << endl;
	}
}