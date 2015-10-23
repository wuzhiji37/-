#include <iostream>
using namespace std;

int main()
{__int64 a,b,c,s,t;
while(cin>>a>>b)
{s=0;t=0;if(a>b){c=a;a=b;b=c;}
for(int i=a;i<=b;++i)
{if(i%2==0)s=s+i*i;else t=t+i*i*i;}
cout<<s<<" "<<t<<endl;}
return 0;
}
