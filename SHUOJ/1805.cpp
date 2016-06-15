#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cmath>
using namespace std;

int main()
{
    int T,n,i;
    double a[100000],s;
    cin>>T;
    while(T--) {
        cin>>n;
        for(i=0;i<n;i++) {
            cin>>a[i];
        }
        sort(a,a+n);
        for(s=0,i=1;i<n-1;i++) {
            s+=a[i];
        }
        printf("%.2lf,%.2lf,%.2lf\n",a[0],a[n-1],s/(n-2));
    }
    return 0;
}
