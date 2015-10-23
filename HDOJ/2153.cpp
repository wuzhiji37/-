#include <iostream>
using namespace std;
int main()
{ int n,s;
while(cin>>n&&n!=0)
{if(n>1){for(int i=1;i<=n;i++){cout<<' ';if(i<10)cout<<' ';cout<<i;}cout<<endl;
 for(int i=2;i<n;i++)
 {cout<<' ';s=4*n-i-2;if(s<10)cout<<' ';cout<<s;
  for(int j=2;j<n;j++)cout<<"   ";
  cout<<' ';s=n+i-1;if(s<10)cout<<' ';cout<<s<<endl;}
 for(int i=1;i<=n;i++){cout<<' ';if(3*n-1-i<10)cout<<' ';cout<<3*n-1-i;}cout<<endl;}
 else cout<<"  1"<<endl;}
return 0;
}
