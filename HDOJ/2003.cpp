#include <iostream>
#include <iomanip> 
using namespace std;

int main()
{double a;
while(cin>>a)
{if(a<0){a=-1*a;}
 cout<<fixed<<setprecision(2)<<a<<endl;}
return 0;
}
