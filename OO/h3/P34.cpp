#include <bits/stdc++.h>
using namespace std;

class Number{
    int i;
public:
    Number(int ii = 0) : i(ii) {}   //构造函数
    const Number operator+(const Number& n) const { //成员函数
        return Number(i + n.i);} 
    friend const Number operator-(const Number&, const Number&);
};

const Number operator-(const Number& n1, const Number& n2){ //友元函数
    return Number(n1.i - n2.i);
}

int main() {
  Number a(47), b(11);
  a + b; // OK
  a + 1; // 右操作数转换为Number
  //1 + a;  错误：左操作数不是Number类型,成员运算符重载的双目运算符左操作数不支持自动类型转换
  a - b; // OK
  a - 1; //右操作数转换为Number
  1 - a; //左操作数转换为Number
} 
