#include<iostream>
using namespace std;
void Nhap(float&, float&);
float Xulya(float);
float Xulyb(float);

int main()
{
	float a, b;
	Nhap(a, b);
	cout << "a = " << Xulya(a)<<endl << "b = " << Xulyb(b);
	return 0;
}

void Nhap(float& aa, float& bb)
{
	cout << "Nhap a = ";
	cin >> aa;
	cout << "Nhap b = ";
	cin >> bb;
}

float Xulya(float aa)
{
	if (aa<0)
		aa = -aa;
	return aa;
}

float Xulyb(float bb)
{
	if (bb < 0)
		bb = -bb;
	return bb;
}




