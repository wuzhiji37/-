#include<iostream>
using namespace std;
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
int main()
{
	long n,i,j,a,b,c;
	cin>>n;
	for(i=1;i<=n;i++)
	{
		cin>>a>>b;
		for(j=2;j<=a/b && gcd(a,b*j)!=b;j++);
		cout<<b*j<<endl;
	}
	return 0;
}
