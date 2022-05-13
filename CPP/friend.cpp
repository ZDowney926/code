#include <bits/stdc++.h>
using namespace std;

class X
{
    friend class Y;     //友元类声明，Y是X的友元类
    public:
        X(int i) {  x=i;  }
        void Print()
        {   cout<<"x="<<x<<','<<"s="<<s<<endl;  }
    private:
        int x;
        static int s;   //静态成员
};

int X::s=5;
class Y 
{
    public:
        Y(int i) {  y=i;  }
        void Print(X &r)
        {   cout<<"x="<<r.x<<','<<"y="<<y<<endl;  }
    private:
        int y;
};

int main() 
{
    X m( 2 );
    m.Print( ) ;
    Y n( 8 );
    n.Print( m );
}
