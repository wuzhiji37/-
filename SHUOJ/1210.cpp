#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cmath>
using namespace std;
int main()
{
    int n,T=0,a[31][31]={1};
    for(int i=1;i<30;i++) {
        for(int j=0;j<=i;j++) {
            if(j==0||j==i)a[i][j]=1;
            else a[i][j]=a[i-1][j-1]+a[i-1][j];
        }
    }
    while(cin>>n){
        for(int i=0;i<n;i++) {
            for(int j=0;j<=i;j++) {
                if(j)cout<<' ';
                cout<<a[i][j];
            }
            cout<<endl;
        }
        cout<<endl;
    }
    return 0;
}
