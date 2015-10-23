#include <iostream>
using namespace std;
int main()
{int a,b,c;
while(cin>>a>>b)
{c=a/b;
if(c!=0)
{cout<<(1+b);
for(int i=2;i<=c;++i)
{cout<<" "<<2*i*b-b+1;}
if(a%b!=0)cout<<" "<<c*b+a+1<<endl;else cout<<endl;}
else cout<<1+a<<endl;
}
return 0;
}
