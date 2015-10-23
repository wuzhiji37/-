#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int n,m;double i,s;
	cin>>n;
	while(n--)
	{
		cin>>m;s=0;
		for(i=1;i<=m;i++)s=s+log(i);
		s=s/log(10)+1;
		cout<<(int)s<<endl;;
	}
	return 0;
}
