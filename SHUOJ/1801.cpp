#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
int main() {
    unsigned long long a[50]={0,1,1},i,n;
    for(i=3;i<50;i++) {
        a[i]=a[i-1]+a[i-2];
    }
    i=1;
    while(cin>>n) {
        cout<<"Case "<<i++<<':'<<n<<','<<a[n]<<endl;
    }
    return 0;
}
