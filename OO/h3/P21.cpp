#include <bits/stdc++.h>
using namespace std;

class Byte { 
  unsigned char b;
public:
  Byte(unsigned char bb = 0) : b(bb) {} //构造函数，默认赋值为0，即空字符
  unsigned char Print() {return b;}  //加了一个打印成员函数
  const Byte operator+(const Byte& right) const { return Byte(b + right.b);}  //加法重载
  const Byte operator-(const Byte& right) const { return Byte(b - right.b);}  //减法重载
  const Byte operator*(const Byte& right) const { return Byte(b * right.b);}  //乘法重载
  const Byte operator/(const Byte& right) const {                             //除法重载
    assert(right.b != 0); 	
    return Byte(b / right.b);}
  const Byte operator%(const Byte& right) const {                             //取余重载
    assert(right.b != 0);	
    return Byte(b % right.b);}
  const Byte operator^(const Byte& right) const {return Byte(b ^ right.b);}    //位运算符 ^,&,|,<<,>>重载
  const Byte operator&(const Byte& right) const {return Byte(b & right.b);}
  const Byte operator|(const Byte& right) const {return Byte(b | right.b);}
  const Byte operator<<(const Byte& right) const {return Byte(b << right.b);}
  const Byte operator>>(const Byte& right) const {return Byte(b >> right.b);}
  Byte& operator=(const Byte& right) {  // 赋值运算符只能用成员函数重载
    if(this == &right) return *this;    // 自赋值检测
    b = right.b;
    return *this;}
  Byte& operator+=(const Byte& right) { //复合赋值运算符有：+=,-=,*=,/=,%=,^=,&=,|=,<<=,>>=
    b += right.b;
    return *this;
  }
  Byte& operator/=(const Byte& right) {
    assert(right.b != 0);
    b /= right.b;
    return *this;
  }
  Byte& operator^=(const Byte& right) {
    b ^= right.b;
    return *this;
  }
  bool operator==(const Byte& right) const {return b == right.b;} //关系运算符有 ==, !=, <,<=,>,>=
  bool operator!=(const Byte& right) const {return b != right.b;}
  bool operator<(const Byte& right) const {return b < right.b;}
  //二元逻辑运算符&&和||
  bool operator&&(const Byte& right) const {return b && right.b;}
  bool operator||(const Byte& right) const {return b || right.b;}
}; //end of class Byte

int main()
{
  unsigned char a,b;
  cin >> a >> b;
  Byte A(a),B(b),C;   //定义三个Byte类对象，其中A、B的数据成员由输入的a、b决定。
  C = A + B;          //对重载运算符+的使用，实际效果是把A.b、B.b求和赋值给了C.b
  cout << A.Print() << ' ' << B.Print() << ' ' << C.Print() << endl;
  if(A < C || B < C)  //对重载运算符<、||的使用
  A += A;             //对重载运算符+=的使用
  cout << A.Print();
}