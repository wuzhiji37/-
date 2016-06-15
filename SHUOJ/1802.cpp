#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
int main() {
    int a[100][100],m,n,x=0;
    while(cin>>m>>n) {
        if(x++)cout<<endl;
        for(int i=0;i<m;i++)
            for(int j=0;j<n;j++)
                cin>>a[i][j];
        for(int i=0;i<n;i++) {
            for(int j=0;j<m;j++) {
                if(j)cout<<' ';
                cout<<a[j][i];
            }
            cout<<endl;
        }
    }
    return 0;
}
