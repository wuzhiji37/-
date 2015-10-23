#include <iostream>
using namespace std;

int main()
{int a,b,c,r;char ch;
int d[12]={0,31,59,90,120,151,181,212,243,273,304,334};
while(cin>>a>>ch>>b>>ch>>c)
{if((a%4!=0 ||(a%100==0 && a%400!=0))|| b<=2){r=0;}else{r=1;}

cout<<r+d[b-1]+c<<endl;}

return 0;
}
