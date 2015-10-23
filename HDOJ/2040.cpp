#include <iostream>
using namespace std;
int s(int x)
{int s0=0;
for(int j=1;j<=(x/2);j++){if(x%j==0)s0=s0+j;}
return s0;}
int main()
{int n,a,b;
cin>>n;
for(int i=1;i<=n;i++)
{cin>>a>>b;
if((a==s(b))&&(b==s(a)))cout<<"YES"<<endl;else cout<<"NO"<<endl;}
return 0;
}
