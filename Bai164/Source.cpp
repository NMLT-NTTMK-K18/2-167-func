#include<iostream>
using namespace std;
void Nhap(int&);
float Xuly(int);

int main()
{
	int n;
	Nhap(n);
	cout << "s = " << Xuly(n);
	return 0;
}

void Nhap(int& nn)
{
	int n;
	cout << "Nhap n: ";
	cin >> nn;
}

float Xuly(int nn)
{
	float s = 1;
	int i = 1;

	while (i <= nn)
	{
		s = 1 / (1 + s);
		i = i + 1;
	}
	return s;

}
