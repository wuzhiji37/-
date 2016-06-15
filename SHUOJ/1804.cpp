#include<iostream>
#include<stdio.h>
#include<string.h>
#include<cmath>
using namespace std;
int main() {
    double a,b,c;
    while(cin>>a>>b>>c) {
        double d=sqrt(b*b-4*a*c);
        double x1=(-b+d)/(2*a),x2=(-b-d)/(2*a);
        if(x1>=x2)printf("%.2lf %.2lf\n",x1,x2);
        else printf("%.2lf %.2lf\n",x2,x1);
    }
    return 0;
}
