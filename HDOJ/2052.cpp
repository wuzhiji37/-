#include <iostream>
using namespace std;
int main()
{int a,b;
while(cin>>a>>b)
{cout<<'+';for(int i=1;i<=a;i++){cout<<'-';}cout<<'+'<<endl;
for(int j=1;j<=b;j++)
{cout<<'|';for(int i=1;i<=a;i++){cout<<' ';}cout<<'|'<<endl;}
 cout<<'+';for(int i=1;i<=a;i++){cout<<'-';}cout<<'+'<<endl<<endl;}
return 0;
}
