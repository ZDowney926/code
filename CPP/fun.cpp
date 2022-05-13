 #include <iostream>
 using namespace std;

class A
{
    public:
    A(int i=8, int j=10, int k=12); //构造函数参数设置默认值8、10、12
    int aout()   {  return a;  }    //a的输出函数
    int bout()   {  return b;  }    //b的输出函数
    int cout()   {  return c;  }    //c的输出函数
    private:
    int a,b,c;
};

A::A(int i,int j,int k)
{
    a=i; b=j; c=k; //a、b、c参数不输入时默认为8、10、12
}

int main(  )
{
    A X,Y(5),Z(7,9,11);
    cout<<"X="<<X.aout()<<','<<X.bout()<<','<<X.cout()<<endl;
    cout<<"Y="<<Y.aout()<<','<<Y.bout()<<','<<Y.cout()<<endl;
    cout<<"Z="<<Z.aout()<<','<<Z.bout()<<','<<Z.cout()<<endl;
}
