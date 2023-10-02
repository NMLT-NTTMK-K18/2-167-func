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
	int s = 0;
	int i = 1;

	while (i < nn)
	{
		if (nn % i == 0)
			s = s + i;
		i = i + 1;
	}

	if (s == nn)
		cout << "HT";
	else
		cout << "Ko HT";
}


