#include <iostream>
using namespace std;
int main()
{
	int n,m,i,a[31]={1,1};
	for(i=2;i<=30;i++)a[i]=a[i-1]+a[i-2]*2;
	cin>>n;
	while(n--)
	{
		cin>>m;cout<<a[m]<<endl;
	}
	return 0;
}
