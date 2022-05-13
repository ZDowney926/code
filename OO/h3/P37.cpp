#include <iostream>
using namespace std;

class complex{
private:
  	double real, image;
public:
	complex(double r = 0, double i = 0){
    	real = r; image = i; } 
	//成员函数重载运算符+
	const complex operator+(const complex& right)  const{
    	return complex (real+right.real,image+right.image);}
	//全局函数重载输入输出运算符
	friend ostream& operator<<(ostream& os, const complex& c);
	friend istream&  operator>>(istream& is,complex& c);
};
	//输入输出运算符函数的定义
ostream& operator<<(ostream& os, const complex& c){
	if(c.real==0 && c.image==0){ os << "0"; }
	if(c.real!=0){ os << c.real; }
	if(c.image!=0){
		if(c.image>0 && c.real!=0)
			os << "+";
		os << c.image << "i" ;
	}
	return os; //返回ostream对象便于链式表达式
}

istream& operator>>(istream& is, complex& c){
	cout<<"please input a complex:";
	return is>>c.real>>c.image;
}

int main() {
	complex c1,c2;
	cin>>c1;
	cin>>c2;
	cout<<c1+c2<<endl; //调用全局函数operator<<
}
