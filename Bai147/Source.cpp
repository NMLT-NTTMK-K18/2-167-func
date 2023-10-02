#include <iostream>
using namespace std;
void Nhap(int &);
int Xuly(int);

int main()
{
	int n;
	Nhap(n);
	if (Xuly(n) == 1)
		cout << "TL";
	else
		cout << "Ko TL";
	return 0;
}

void Nhap(int &nn)
{
	int n;
	cout << "Nhap n: ";
	cin >> nn;
}

int Xuly(int nn)
{
	int flag = 1;
	int t = nn;
	int dv;

	while (t != 0)
	{
		dv = t % 10;
		if (dv % 2 == 0)
			flag = 0;
		t = t / 10;
	}

	if (flag == 1)
		return 1;
	else
		return 0;
}