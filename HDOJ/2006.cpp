#include <iostream>
using namespace std;

int main()
{__int64 a,x,s;
while(cin>>a)
{s=1;
for(int i=1;i<=a;++i)
{cin>>x;if(x%2==1)s=s*x;}
cout<<s<<endl;             
}
return 0;
}
