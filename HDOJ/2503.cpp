#include<iostream>
using namespace std;
long gcd(int x,int y);
int main()
{
	long n,a,b,c,d,e,f,g,i;
	cin>>n;
	for(i=1;i<=n;i++)
	{
		cin>>a>>b>>c>>d;
		e=a*d+b*c;
		f=b*d;
		g=gcd(e,f);
		e/=g;
		f/=g;
		cout<<e<<' '<<f<<endl;
	}
	return 0;
}
long gcd(int x,int y)
{
	int z;
	if(x<y){z=x;x=y;y=z;}
	while(x%y!=0)
	{
		x=x-y;
		if(x<y){z=x;x=y;y=z;}
	}
	return y;
}
