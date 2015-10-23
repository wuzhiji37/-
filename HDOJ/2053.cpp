#include <iostream>
using namespace std;
int main()
{int n,s;
while(cin>>n)
{s=0;for(int i=1;i<=n;i++){if(n%i==0)s++;}
if(s%2)cout<<1<<endl;else cout<<0<<endl;}
return 0;
}
