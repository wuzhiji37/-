#include<stdio.h>
#include<math.h>
int main()
{
double w,h;
double v1,v2,v; 
while(scanf("%lf%lf",&w,&h)!=EOF)
{
if(w==0&&h==0)
break;
if(h>=(acos(-1)+1)*w)
{
v1=w*w*(h*acos(-1)-w)/(4*acos(-1)*acos(-1));
v2=acos(-1)*w*w*w/4.0;
}
else
{
v1=w*w*(h*acos(-1)-w)/(4*acos(-1)*acos(-1));
v2=acos(-1)*h*h*w/(4*(acos(-1)+1)*(acos(-1)+1));
}
printf("%.3lf\n",v=v1>v2?v1:v2);
}
return 0;
}