#include <iostream>
using namespace std;
int main()
{unsigned __int64 s;int a;
while(cin>>a)
{s=1;
for(int i=2;i<=a;++i){s=(s+1)*2;}
cout<<s<<endl;
}
return 0;
}
