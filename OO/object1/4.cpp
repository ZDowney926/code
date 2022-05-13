#include <iostream>
using namespace std;
class complex{
	private:
  		double real, image;
	public:
		complex(double r = 0, double i = 0){ //声明构造函数进行初始化 
    		real = r; 
			image = i; 
	} 
	//成员函数重载运算符 +
		const complex operator+(const complex& right) const{
    		return complex (real+right.real,image+right.image);  
	}
	//成员函数重载运算符 - 
		const complex operator-(const complex& right) const{
    		return complex (real-right.real,image-right.image);  
	}
	//重载运算符 += 
		complex& operator+=(const complex& right){
			real+=right.real; 
			image+=right.image;
			return *this;
	}
	//重载一元运算符 -、+ 
		complex operator-(){
			return complex(-real,-image);
		}	
		complex operator+(){
			return complex(+real,+image);
		}
	//全局函数重载运算符 *	
		friend complex operator*(complex &c1,complex &c2);
	//成员函数重载运算符 / 
		complex operator/(complex &c){
    		double r,i;
    		r=(real*c.real+image*c.image)/(c.real*c.real+c.image*c.image);
    		i=(image*c.real-real*c.image)/(c.real*c.real+c.image*c.image);
    		return complex(r,i);
		} 
	//全局函数重载输入输出运算符
		friend ostream&  operator<<(ostream& os, const complex& c);
		friend istream&  operator>>(istream& is,complex& c);

};
//输入输出运算符函数的定义
ostream& operator<<(ostream& os, const complex& c){
   		if(c.real==0 && c.image==0){ 
		   os << "0"; 
	}
   		if(c.real!=0){ 
		   os << c.real;
	}
   		if(c.image!=0){
			if(c.image>0 && c.real!=0)
				os << "+";
				os << c.image << "i" <<endl;				
	}
   		return os; //返回ostream对象便于链式表达式
}

istream& operator>>(istream& is, complex& c){
		cout<<"请输入real, image:";
		return is>>c.real>>c.image;
}
//重载*运算符 (a+bi) * (c+di) = (ac-bd) + (bc+ad)i
complex operator*(complex &c1,complex &c2)
{
    	complex c;
    	c.real=c1.real*c2.real-c1.image*c2.image;
    	c.image=c1.image*c2.real+c1.real*c2.image;
    	return complex(c.real,c.image);
}
int main() {
		complex c1,c2;
		cin>>c1;   //调用全局函数operator>>
		cin>>c2;
	cout<<"c1+c2:";
		cout<<c1+c2<<endl; //调用全局函数operator<<
	cout<<"c1-c2:"; 		
		cout<<c1-c2<<endl;	//调用operator- 
	cout<<"c1*c2:";
		cout<<c1*c2<<endl;	//调用operator*	
	cout<<"c1/c2:";
		cout<<c1/c2<<endl;	//调用operator/
		
		c1+=c2;
	cout<<"c1+=c2:";		//调用operator+= 
		cout<<c1<<endl;
	cout<<"-c1:";			//调用一元调用operator- 
		cout<<(-c1)<<endl;
	cout<<"+c1:";			//调用一元调用operator+ 
		cout<<(+c1)<<endl;
}