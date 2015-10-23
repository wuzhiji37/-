#include <iostream>
using namespace std;
int main()
{int a,b,n,s[9]={1,10,100,1000,10000,100000,1000000,10000000,100000000};
while(cin>>a>>b>>n&&(a!=0||b!=0))
{if(a%s[n]==b%s[n])cout<<-1<<endl;else cout<<a+b<<endl;}
return 0;
}
