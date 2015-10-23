#include <iostream>
using namespace std;
int main()
{unsigned __int64 a[10001];
a[1]=2;for(int i=2;i<=10001;i++){a[i]=a[i-1]+(i-1)*4+1;}cin>>a[0];
while(cin>>a[0]){cout<<a[a[0]]<<endl;}
return 0;
}
