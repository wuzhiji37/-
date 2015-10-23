#include <iostream>
using namespace std;
int main()
{int a,b,c,tf;
while(cin>>a>>b && (a!=0||b!=0))
{if(a>b){c=a;a=b;b=c;}tf=0;
for(int i=a;i<=b&tf==0;++i)
{c=i*i+i+41;
for(int j=2;j<=c-1;++j){if(c%j==0)tf=1;}
if(tf==1)cout<<"Sorry"<<endl;
}
if(tf==0)cout<<"OK"<<endl;}
return 0;
}
