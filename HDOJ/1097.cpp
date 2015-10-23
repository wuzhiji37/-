#include<iostream>
using namespace std;
int main()
{
	int a,b,i,s;
	while(cin>>a>>b)
	{
		a%=10;b=(b-1)%4+1;s=1;
		for(i=1;i<=b;i++)
		s*=a;
		cout<<s%10<<endl;
	}
	return 0;
}
