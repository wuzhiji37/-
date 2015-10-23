#include <iostream>
using namespace std;
int main()
{double a,b,c;int n;
cin>>n;
for(int i=1;i<=n;i++)
{cin>>a>>b>>c;
if(a+b>c&&a+c>b&&b+c>a)cout<<"YES"<<endl;else cout<<"NO"<<endl;}
return 0;
}
