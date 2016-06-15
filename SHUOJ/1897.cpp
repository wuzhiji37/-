#include<iostream>
#include<stdio.h>
#include<string.h>
#include<algorithm>
using namespace std;
int main() {
    int i,a[1005],T,n;
    cin>>T;
    while(T--) {
        cin>>n;
        for(i=0;i<n*2;i++)cin>>a[i];
        sort(a,a+2*n);
        int s=0;
        for(i=0;i<n;i++)s+=(a[2*n-1-i]-a[i])*(a[2*n-1-i]-a[i]);
        cout<<s<<endl;
    }
    return 0;
}
