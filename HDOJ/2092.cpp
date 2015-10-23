#include <iostream>
#include <cmath>
using namespace std;
int main()
{int b,c,del;double a;
while(cin>>b>>c&&(b!=0||c!=0))
{if(b*b-4*c<0)cout<<"No"<<endl;
else{a=(-b+sqrt(b*b-4*c))/2;
cout<<((int)a==a?"Yes":"No")<<endl;}
}
return 0;
}
