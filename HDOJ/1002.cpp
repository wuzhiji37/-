#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	int n,i,l,t,a[1001],b[1001];char s1[1001],s2[1001];
	while(cin>>n)
	{
		for(t=0;t<n;t++)
		{
			if(t)cout<<endl;cout<<"Case "<<t+1<<":"<<endl;
			cin>>s1>>s2;cout<<s1<<" + "<<s2<<" = ";
			strrev(s1);strrev(s2);
			memset(a,0,1000*sizeof(int));
			memset(b,0,1000*sizeof(int));
			for(i=0;i<strlen(s1);i++)a[i+1]=s1[i]-'0';
			for(i=0;i<strlen(s2);i++)b[i+1]=s2[i]-'0';
			l=strlen(s1)>strlen(s2)?strlen(s1):strlen(s2);
			for(i=1;i<=l;i++)
			{
				a[i]=a[i]+b[i];
				a[i+1]=a[i+1]+a[i]/10;
				a[i]%=10;
			}
			if(a[l+1]!=0)cout<<a[l+1];
			for(i=l;i>0;i--)cout<<a[i];cout<<endl;
		}
	}
	return 0;
}
