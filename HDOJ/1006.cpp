#include<iostream>
#include<iomanip>
#define X 100
using namespace std;
double angle(double x,double y)
{
	double z;
	z=x-y;
	if(z<0)z=-z;
	if(z>180)z=360-z;
	return z;
}
int main()
{
	double a,b,c,n,i,s;
	while(cin>>n&&n!=-1)
	{
		a=0;b=0;c=0;s=0;
		for(i=1;i<=43200*X;i++)
		{
			a+=1.0/120/X;b+=1.0/10/X;c+=6.0/X;
			if(a>=360)a-=360;
			if(b>=360)b-=360;
			if(c>=360)c-=360;
			if(angle(a,b)>=n&&angle(b,c)>=n&&angle(a,c)>=n)s++;
		}
		cout<<fixed<<setprecision(3)<<s/432/X<<endl;
	}
	return 0;
}
