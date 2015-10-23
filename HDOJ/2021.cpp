#include <iostream>
using namespace std;
int main()
{int n,a,s,m[11]={0,1,1,2,2,1,2,2,3,3,1};
while(cin>>n && n!=0)
{s=0;for(int i=1;i<=n;++i){cin>>a;
s=s+a/100+(a%100)/50+(a%50)/10+m[a%10];}
cout<<s<<endl;}
return 0;
}
