#include<iostream>
#include<iomanip>
using namespace std;
void Nhap(float&, float&,float&);
float Xulya(float, float,float);
float Xulyb(float, float,float);
float Xulyc(float, float, float);

int main()
{
	float a, b,c;
	Nhap(a,b,c);
	cout << "Gia tri tang dan la:" << Xulya(a,b, c) << setw(4) << Xulyc(a,b, c) << setw(4) << Xulyb(a,b, c);
	return 0;
}

void Nhap(float& aa, float& bb,float& cc)
{
	cout << "Nhap a = ";
	cin >> aa;
	cout << "Nhap b = ";
	cin >> bb;
	cout << "Nhap c = ";
	cin >> cc;
}

float Xulya(float aa, float bb,float cc)
{
	float temp=aa;

	if (aa>bb)
	{
		temp=bb;
	}

	if (temp >cc)
	{
		temp=cc;
	}
	return temp;
}

float Xulyb(float aa, float bb, float cc)
{
	float yyy=aa;

	if (aa < bb)
	{
		yyy=bb;
	}

	if (yyy < cc)
	{
		yyy=cc;
	}
	return yyy;
}

float Xulyc(float aa, float bb, float cc)
{
	float zzz=aa;
	if ((aa <= bb)&&(bb<=cc))
	{
		zzz=bb;
	}

	if (aa <= cc && cc<=bb)
	{
		zzz=cc;
	}

	if (bb <= cc && cc<=aa)
	{
		zzz=cc;
	}
	if (cc <= bb && bb <= aa)
		zzz = bb;
	return zzz;
}
