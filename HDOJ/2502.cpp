#include <iostream>
using namespace std;
int main()
{
	int n,m,i,j,a[21]={1,1},t=1,s=0;
	for(i=2;i<=20;i++)
	{
		t*=2;
		s=s+a[i-1];
		a[i]=s+t;
	}
	cin>>n;
	while(n--)
	{
		cin>>m;cout<<a[m]<<endl;
	}
	return 0;
}
