#include <bits/stdc++.h> 
#define SIZE 15001 
using namespace std; 

class Shape{
public:
    virtual void set()=0;
    virtual double getArea()=0;
};

int f[SIZE] ;
int main(){
    int n, m, i; 
    cin >> m >> n;   
    f[m]=1;
    f[m+1]=1;
    for (i = m+2; i <= n; i++)
        f[i] = f[i-1] + f[i-2];
    cout << f[n] << endl; 
    return 0;
}