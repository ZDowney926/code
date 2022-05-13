#include<bits/stdc++.h>
using namespace std;
char a[10000];
int n,sp,i=0;

class shape
{
    public:
        virtual double area()=0;
};

class triangle:public shape
{
    private:
        double w,h;
    public:
        triangle(double i, double j):w(i),h(j){};
        double area()
        {
            return w*h*0.5;
        }
};

void print()
{
    cout<<"step"<<setw(2)<<i<<':';
    for(int i=1;i<=2*n+2;i++)cout<<a[i];
    cout<<endl;
    i++;
}
void move(int k)
{
    for(int j=0;j<=1;j++)
    {
        a[sp+j]=a[k+j];
        a[k+j]='-';
    }
    sp=k;
    print();
}
void choose(int x)
{
    if(x==4)
    {
        move(4);move(8);move(2);move(7);move(1);
    }
    else
    {
        move(x);move(2*x-1);choose(x-1);
    }
}
int main()
{
    cin>>n;
    sp=2*n+1;
    for(int i=1;i<=n;i++)a[i]='o';
    for(int i=n+1;i<=2*n;i++)a[i]='*';
    a[2*n+1]='-';
    a[2*n+2]='-';
    print();
    choose(n);
}