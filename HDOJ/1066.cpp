#include<iostream>
using namespace std;
int main()
{
	int n,s,x,i;
	while(cin>>n)
	{
		s=1;
		for(i=2;i<=n;i++)
		{
			x=i;
			while(x%10==0)x/=10;
			s=s*x;
			while(s%10==0)s/=10;
			s%=100000;
		}
		cout<<s%10<<endl;
	}
	return 0;
}
