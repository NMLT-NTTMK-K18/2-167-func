#include <iostream>
using namespace std;
void Nhap(int&);
int Xuly(int);

int main()
{
	int n;
	Nhap(n);
	if (Xuly(n) == 1)
		cout << "tang";
	else
		cout << "khong tang";
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
	int flag = 1;
	int t = nn;
	int dv;
	int hc;

	while (t >= 10)
	{
		dv = t % 10;
		hc = t / 10 % 10;
		if (hc > dv)
			flag = 0;
		t = t / 10;
	}
	return flag;
}
