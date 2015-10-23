#include <iostream>
using namespace std;
int main()
{int x,y,z,n,min;
cin>>n;
for(int i=1;i<=n;i++){cin>>x>>y>>min;
for(int j=2;j<=x;j++){cin>>z;if(z<=min)min=z;}cout<<(100-min)*(100-min)<<endl;}
return 0;
}
