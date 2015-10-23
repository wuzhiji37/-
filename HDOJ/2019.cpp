#include <iostream>
using namespace std;
int main()
{int m,n,a[101];

while(cin>>n>>m &&(n!=0 || m!=0))
{a[0]=-32767;
for(int i=1;i<=n;++i)
{cin>>a[i];if(a[i-1]<m && a[i]>=m)a[0]=i-1;}
if(a[0]==0)cout<<m;
else cout<<a[1];
for(int i=2;i<=a[0];++i){cout<<' '<<a[i];}
if(a[0]!=0)cout<<' '<<m;
for(int i=a[0]+1;i<=n;++i){cout<<' '<<a[i];}
cout<<endl;
}
return 0;
}
