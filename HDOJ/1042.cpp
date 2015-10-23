#include<iostream>
#define ma 12000
using namespace std;
int a[ma+1];
int main()
{
	int n,i,j;
	while(cin>>n)
	{
		memset(a,0,sizeof(a));a[0]=1;
		for(i=1;i<=n;i++)
		{
			for(j=0;j<ma;j++)a[j]*=i;
			for(j=0;j<ma;j++)
			{
				a[j+1]+=a[j]/1000;
				a[j]%=1000;
			}
		}
		i=ma;
		while(a[i]==0)i--;
		cout<<a[i];i--;
		for(j=i;j>=0;j--)
		if(a[j]>99)cout<<a[j];
		else if(a[j]>9)cout<<"0"<<a[j];
		else cout<<"00"<<a[j];
		cout<<endl;
	}
	return 0;
}
