#include <iostream>
#include <iomanip>
#include<typeinfo>
using namespace std;
template <typename T,int n>
class Stack
{
protected:
    T* m_data;
    int m_count;
public:
    Stack()
    {
        m_data=new T[n];
        Clear();
    }
    ~Stack()
    {
        delete []m_data;
    }
    void Clear()
    {
        m_count=0;
    }
    void Push(T a)
    {
        m_data[m_count++]=a;
    }
    bool Pop(T& a)
    {
        if(m_count==0) return 0;
        a = m_data[--m_count];
        return 1;
    }
};
int main()
{
   Stack <int, 100> stk1; //创建对象
   Stack <double, 100> stk2; //创建对象
   int n, m;
   cin >> n >> m;
   for(int i=0;i<n;i++)//输入n个整数，并压入堆栈stk1中
    {
        int x;
        cin>>x;
        stk1.Push(x);
    }
   for(int i=0;i<m;i++)//输入m个浮点数，并压入堆栈stk2中
    {
        double x;
        cin>>x;
        stk2.Push(x);
    }
   int a;
   if (stk1.Pop(a))
      cout << a << endl;
   if (stk1.Pop(a))
      cout << a << endl;
   double x;
   if (stk2.Pop(x))
      cout << setiosflags(ios::fixed) << setprecision(2) << x << endl;
   if (stk2.Pop(x))
      cout << setiosflags(ios::fixed) <<setprecision(2) << x << endl;
   return 0;
}