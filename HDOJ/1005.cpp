#include<iostream>
using namespace std;
int main()
{
	int a,b,c,i,l,s[55];
	while(cin>>a>>b>>c&&(a!=0||b!=0||c!=0))
	{
		s[1]=1;s[2]=1;
		for(i=3;i<=55;i++)
		{
			s[i]=(a%7*s[i-1]+b%7*s[i-2])%7;
		}
		cout<<s[c%48]<<endl;
	}
	return 0;
}
