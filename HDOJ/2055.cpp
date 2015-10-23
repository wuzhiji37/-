#include <iostream>
using namespace std;
int main()
{char c;int a,n;
cin>>n;
for(int i=1;i<=n;i++)
{cin>>c>>a;
if(c>='A'&&c<='Z')cout<<c-'A'+1+a<<endl;
if(c>='a'&&c<='z')cout<<-(c-'a'+1)+a<<endl;}
return 0;
}
