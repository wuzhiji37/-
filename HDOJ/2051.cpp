#include <iostream>
using namespace std;
int main()
{int n,a[10],b[10]={1,2,4,8,16,32,64,128,256,512},k;
while(cin>>n)
{for(int i=0;i<=9;i++){a[i]=0;}
for(int i=9;i>=0;i--){if(n>=b[i]){a[i]++;n-=b[i];}}
for(int i=9;i>=0;i--){if(a[i]==1){k=i;break;}}
for(int i=k;i>=0;i--){cout<<a[i];}
cout<<endl;
}
return 0;
}
