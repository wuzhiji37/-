#include <iostream>
using namespace std;
int main()
{int a[101],min,swap;
while(cin>>a[0] && a[0]!=0)
{min=1;
for(int i=1;i<=a[0];++i)
{cin>>a[i];if(a[i]<a[min])min=i;}
swap=a[1];a[1]=a[min];a[min]=swap;
cout<<a[1];
for(int i=2;i<=a[0];++i){cout<<" "<<a[i];}
cout<<endl;
}
return 0;
}
