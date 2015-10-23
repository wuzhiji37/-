#include <iostream>
using namespace std;
int main()
{int n,m,max,m1,m2,ml,a[100001],b[100001];
cin>>n;
for(int i=1;i<=n;i++)
{max=-20000;m1=0;m2=0;ml=-1;cin>>m;b[0]=0;for(int i=1;i<=m;i++){cin>>a[i];b[i]=b[i-1]+a[i];}
for(int i=1;i<=m;i++)
{for(int j=i;j<=m;j++)
{if(b[j]-b[i-1]>max||(b[j]-b[i-1]==max)&&(j-i+1>ml)){max=b[j]-b[i-1];m1=i;m2=j;ml=j-i+1;}}}
cout<<"Case "<<i<<':'<<endl<<max<<' '<<m1<<' '<<m2<<endl;if(i!=n)cout<<endl;
}
return 0;
}
