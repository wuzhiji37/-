#include <iostream>
#include <iomanip>
using namespace std;
int main()
{double x1,x2,x3,x4,y1,y2,y3,y4,x0,y0,s;
while(cin>>x1>>y1>>x2>>y2>>x3>>y3>>x4>>y4)
{if(x1>x2){x0=x1;x1=x2;x2=x0;}if(y1>y2){y0=y1;y1=y2;y2=y0;}
 if(x3>x4){x0=x3;x3=x4;x4=x0;}if(y3>y4){y0=y3;y3=y4;y4=y0;}
 if(x2<x3||x4<x1||y2<y3||y4<y1)s=0;
 if(x1<x3&&x2>=x3&&x2<=x4&&y1<y3&&y2>=y3&&y2<=y4)s=(x2-x3)*(y2-y3);
 if(x1>=x3&&x2<=x4&&y1<=y3&&y2>=y3&&y2<=y4)s=(x2-x1)*(y2-y3);
 if(x1>=x3&&x1<=x4&&x2>x4&&y1<y3&&y2>=y3&&y2<=y4)s=(x4-x1)*(y2-y3);
 if(x1<x3&&x2>x4&&y1<y3&&y2>=y3&&y2<=y4)s=(x4-x3)*(y2-y3);
 
 if(x1<x3&&x2>=x3&&x2<=x4&&y1>=y3&&y2<=y4)s=(x2-x3)*(y2-y1);
 if(x1>=x3&&x2<=x4&&y1>=y3&&y2<=y4)s=(x2-x1)*(y2-y1);
 if(x1>=x3&&x1<=x4&&x2>x4&&y1>=y3&&y2<=y4)s=(x4-x1)*(y2-y1);
 if(x1<x3&&x2>x4&&y1>=y3&&y2<=y4)s=(x4-x3)*(y2-y1);
 
 if(x1<x3&&x2>=x3&&x2<=x4&&y1>=y3&&y1<=y4&&y2>y4)s=(x2-x3)*(y4-y1);
 if(x1>=x3&&x2<=x4&&y1>=y3&&y1<=y4&&y2>y4)s=(x2-x1)*(y4-y1);
 if(x1>=x3&&x1<=x4&&x2>x4&&y1>=y3&&y1<=y4&&y2>y4)s=(x4-x1)*(y4-y1);
 if(x1<x3&&x2>x4&&y1>=y3&&y1<=y4&&y2>y4)s=(x4-x3)*(y4-y1);
 
 if(x1<x3&&x2>=x3&&x2<=x4&&y1<y3&&y2>y4)s=(x2-x3)*(y4-y3);
 if(x1>=x3&&x2<=x4&&y1<y3&&y2>y4)s=(x2-x1)*(y4-y3);
 if(x1>=x3&&x1<=x4&&x2>x4&&y1<y3&&y2>y4)s=(x4-x1)*(y4-y3);
 if(x1<x3&&x2>x4&&y1<y3&&y2>y4)s=(x4-x3)*(y4-y3); 
 
 cout<<fixed<<setprecision(2)<<s<<endl;
}
return 0;
}
