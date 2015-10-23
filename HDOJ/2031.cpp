#include <iostream>
using namespace std;
int main()
{__int64 n;int n0,r,a[51],i;
char b[6]={'A','B','C','D','E','F'};
while(cin>>n>>r)
{if(n<0){n0=-1;n=-n;}else n0=1;
for(i=1;i<=50;++i){a[i]=0;}
i=0;
do{i++;a[i]=n%r;n=n/r;}while(n!=0);
if(n0==-1)cout<<'-';
for(int j=i;j>0;j--)
{if(a[j]<=9)cout<<a[j];else cout<<b[a[j]-10];}
cout<<endl;}
return 0;
}
