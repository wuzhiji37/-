#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{float x1,x2,x,y1,y2,y,l;
while(cin>>x1>>y1>>x2>>y2)
{x=(x2-x1)*(x2-x1);y=(y2-y1)*(y2-y1);
l=sqrt(x+y);
cout<<fixed<<setprecision(2)<<l<<endl;} 
return 0;
}
