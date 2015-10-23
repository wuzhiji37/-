#include <iostream>
using namespace std;
int main()
{char c;int a;
cin>>c>>a;
if(a>1){for(int i=1;i<=a-1;i++){cout<<' ';}cout<<c<<endl;
 for(int i=2;i<=a-1;i++)
 {for(int j=1;j<=a-i;j++){cout<<' ';}cout<<c;
  for(int j=1;j<=2*i-3;j++){cout<<' ';}cout<<c<<endl;;}
 for(int i=1;i<=2*a-1;i++){cout<<c;}cout<<endl;}
else if(a=1){cout<<c<<endl;}
while(cin>>c>>a&&c!='@')
{cout<<endl;
if(a>1){for(int i=1;i<=a-1;i++){cout<<' ';}cout<<c<<endl;
 for(int i=2;i<=a-1;i++)
 {for(int j=1;j<=a-i;j++){cout<<' ';}cout<<c;
  for(int j=1;j<=2*i-3;j++){cout<<' ';}cout<<c<<endl;;}
 for(int i=1;i<=2*a-1;i++){cout<<c;}cout<<endl;}
else if(a=1){cout<<c<<endl;}}
return 0;
}
