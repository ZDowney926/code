#include <bits/stdc++.h>
using namespace std;

string a;
int en,tmp=0;
int main() {
    cin>>a;
    en=a.size()-1;
    while(en>=0) {
        if(tmp==0) {
            if(a[en]=='0') {
                tmp++;
                en--;
            } else {
                en--;
            }
        } else {
            if(tmp&1) {
                if(a[en]=='1') {
                    tmp++;
                    en--;
                } else {
                    en--;
                }
            } else {
                if(a[en]=='0') {
                    tmp++;
                    en--;
                } else {
                    en--;
                }
            }
        }
    }
        cout<<tmp<<endl;
    return 0;
}