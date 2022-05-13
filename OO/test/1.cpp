#include <iostream>
using namespace std;
class A {
    public:
    A( ) {  
        a=0;
        cout<<"Default constructor called."<<a<<endl;
    }
    A(int i) {
        a=i;
        cout<<"Constructor called."<<a<<endl;
    }
    ~A( ) {  cout<<"Destructor called."<<a<<endl;  }
    void Print( )  {  cout<<a<<',';  }
    int Geta( ) {  return a;  }
    private:
    int a;
};
class B:public A {
    public:
    B( ) {  
        b=0;
        cout<<"Default constructor called."<<b<<endl;
    }
    B(int i,int j,int k):A(i),aa(j) {
        b=k;
        cout<<"Constructor called."<<b<<endl;
    }
    ~B( ) {  cout<<"Destructor called."<<b<<endl;  }
    void Print( )        {
        A::Print( );
        cout<<b<<','<<aa.Geta()<<endl;
    }
    private:
    int b;
    A aa;
};
int main()
{
    B bb[2];
    bb[0]=B(7,8,9);
    bb[1]=B(12,13,14);
    for(int i = 0;i < 2; i++)
        bb[i].Print();
        return 0;
}
