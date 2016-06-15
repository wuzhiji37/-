#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cmath>
using namespace std;

int main()
{
    int a,b,c,i=1,
    d[2][12]={  {0,31,59,90,120,151,181,212,243,273,304,334},
                {0,31,60,91,121,152,182,213,244,274,305,335}};
    while(cin>>a>>b>>c) {
        printf("Case %d: %02d/%02d/%04d, %d\n",i++,b,c,a,d[a%4==0&&a%100!=0||a%400==0?1:0][b-1]+c);
    }
}
