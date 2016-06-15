#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
int main() {
    int n;
    while(cin>>n)cout<<"The year "<<n<<" is"<<((n%400==0||n%4==0&&n%100!=0)?" ":" not ")<<"a leap year."<<endl;
    return 0;
}
