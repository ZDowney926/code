#include<iostream>
using namespace std;

class Complex
{
private:
    int real;
    int image;
public:
    Complex(int r = 0, int i = 0):real(r),image(i) {}
    friend ostream& operator<<(ostream& os, const Complex& e);
};
ostream& operator<<(ostream& os, const Complex& e)
{
    os<<e.real;
    if(e.image>0)
        os<<"+";
    if(e.image!=0)
        os<<e.image<<"i";
    return os;
}


int main()
{
    int a,b;
    cin>>a>>b;
    Complex z1(a,b);
    cout<<z1<<endl;
}
