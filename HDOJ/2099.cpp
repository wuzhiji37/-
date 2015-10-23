#include <iostream>
using namespace std;
int main()
{int a,b,s;
while(cin>>a>>b&&(a!=0||b!=0))
{a=a%b;s=0;
for(int i=0;i<=99;i++)
{if(((a*100+i)%b)==0)
{s++;if(i==0){cout<<"00";}
else if(i<10){if(s>1)cout<<' ';cout<<'0'<<i;}
else {if(s>1)cout<<' ';cout<<i;}
}}
cout<<endl;}
return 0;
}
