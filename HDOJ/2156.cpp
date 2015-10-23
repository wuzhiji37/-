#include <iostream>
#include <iomanip>
using namespace std;
int main()
{int n;double s;
while(cin>>n && n!=0) 
{s=n;
for(int i=2;i<=n;i++)
{s=s+(double)2*(n-i+1)/i;}
cout<<fixed<<setprecision(2)<<s<<endl;
}



return 0;
}
