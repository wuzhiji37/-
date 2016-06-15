#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
int main() {
    unsigned long long a[50000]={0,3,8};int i,T,n;
    for(i=3;i<50000;i++)a[i]=2*a[i-1]-a[i-2]+2;
    cin>>T;
    while(T--) {
        cin>>n;
        for(i=0;i<49000;i++)
            if(a[i]<n&&n<=a[i+1])break;
        cout<<1-i%2<<endl;
    }
    return 0;
}
