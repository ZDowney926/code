#include <iostream>
using namespace std;

class Y; // 类声明

class X {
public:
  		operator Y() const; // X到Y的转换
};

class Y {
public:
  		//Y(X); // X到Y的转换
};

void f(Y) {}

int main() {
  		X a;
		f(a); // Error: 二义性
		return 0;
} 