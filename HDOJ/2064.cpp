#include <iostream>
using namespace std;
int main()
{unsigned __int64 a[36];
a[1]=2;for(int i=2;i<=35;i++){a[i]=a[i-1]*3+2;}
while(cin>>a[0]){cout<<a[a[0]]<<endl;}
return 0;
}
