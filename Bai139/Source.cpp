#include<iostream>
using namespace std;
void Nhap(float&,float&);
void Xuly(float,float);

int main()
{
	float a, b;
	Nhap(a,b);
	Xuly(a, b);
	return 0;
}
void Nhap(float& aa,float& bb)
{
	cout << "Nhap a = ";
	cin >> aa;

	cout << "Nhap b = ";
	cin >> bb;

}

void Xuly(float aa, float bb)
{
	float x;

	if (aa == 0)
		if (bb == 0)
			cout << "Vo so nghiem";
		else
			cout << "Vo nghiem";
	else
	{
		x = -bb / aa;
		cout << "x = " << x;
	}
}