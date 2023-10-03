#include<iostream>
using namespace std;
void Nhap(int&);
int Xuly(int);

int main()
{
	int n;
	Nhap(n);
	if(Xuly(n)==1)
		cout << "La dang";
	else
		cout << "Ko la dang";

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
	int du;

	while (t > 1)
	{
		du = t % 3;
		if (du != 0)
			flag = 0;
		t = t / 3;
	}

	return flag;
}