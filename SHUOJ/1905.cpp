//
//  main.cpp
//  SHU1905
//
//  Created by ÎâÖÇ¼« on 15/9/24.
//  Copyright (c) 2015Äê ÎâÖÇ¼«. All rights reserved.
//

#include <iostream>
#include <string.h>
using namespace std;
int main(int argc, const char * argv[]) {
    char s[105];
    while (gets(s)) {
        int x=0, y=0, m=0, n=0;
        for (int i = 0; i<strlen(s); i++) {
            if (s[i]=='0') {
                m++;
                if (s[(i+1)%strlen(s)]=='0') {
                    x++;
                } else {
                    y++;
                }
            } else {
                n++;
            }
        }
        if (m*y==x*n) {
            cout<<"EQUAL"<<endl;
        } else if (m*y>x*n) {
            cout<<"ROTATE"<<endl;
        } else {
            cout<<"SHOOT"<<endl;
        }
    }
    return 0;
}
