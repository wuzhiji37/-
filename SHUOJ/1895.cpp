#include<iostream>
#include<stdio.h>
#include<string.h>
#include<cmath>
#define PI acos(-1.0)
using namespace std;
int main() {
    double a,b,c;
    int T;
    cin>>T;
    while(T--) {
        cin>>a>>b>>c;
        printf("%.2lf\n",sqrt(a*a+b*b-2*a*b*cos(PI*(180-c)/180)));
    }
    return 0;
}
