#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
int main() {
    int T;char s[105];
    cin>>T;gets(s);
    while(T--) {
        gets(s);
        if(strlen(s)<=2)cout<<strlen(s)<<endl;
        else {
            int k=1;
            for(int i=0;i<=strlen(s)-2;i++) {
                if(s[i]=='z'&&s[i+1]=='z') {
                    k++;
                }
            }
        cout<<k<<endl;
        }
    }
    return 0;
}
