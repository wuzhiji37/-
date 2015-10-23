#include <iostream>
using namespace std;
int main()
{__int64 a,b;int t;
while(cin>>a>>b && (a!=0||b!=0))
{t=1;for(int i=1;i<=b;i++){t=(a*t)%1000;}
cout<<t<<endl;
}
return 0;
}
