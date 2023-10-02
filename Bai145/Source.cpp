#include<iostream>
using namespace std;
void Nhap(int&);
int Xuly(int);

int main()
{
	int n;
	Nhap(n);
	if (Xuly(n) == 1)
		cout << "CP";
	else
		cout << "Ko CP";
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
	int flag = 0;
	int i = 0;

	while (i <= nn)
	{
		if (i * i == nn)
			flag = 1;
		i = i + 1;
	}

	if (flag == 1)
		return 1;
	else
		return 0;
}

