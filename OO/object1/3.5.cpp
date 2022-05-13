#include <iostream>
#include <cstring>
using namespace std;
class Date //声明一个日期类,录入、显示人员信息 
{
	private:
		int year;
		int month;
		int day;
	public:
		Date(){} //默认构造函数 
		Date(int y,int m,int d):year(y),month(m),day(d) {}; //含参构造函数 
	void Set(int y,int m,int d){
		year=y;
		month=m;
		day=d;
	}
	void show() //显示函数
	{
		cout<<year<<"年"<<month<<"月"<<day<<"日";
	}
};
class Person  //Person类 
{
	private:
		int number;
		string sex;
		Date birthday; //子类 
		char Id[18];
	public:
		Person(){} //默认构造
		Person(int n,int y,int m,int d,char id[],string s);
		Person(Person& p) ;//拷贝构造
		void is(); //输入函数
		void os(); //输出函数
		~Person() //析构函数
	{
		cout<<"编号为"<<number<<"的人员信息已录入成功~"; 
	}
};
//构造函数实现 
Person::Person(int n,int y,int m,int d,char id[],string s):birthday(y,m,d){
		number=n;
		sex=s;
		strcpy(Id,id);	
}
//拷贝构造函数实现 
Person::Person(Person& p){
		number=p.number;
		sex=p.sex;
		birthday=p.birthday;
		strcpy(Id,p.Id);	
}
//信息输入函数 
void Person::is(){
	
		int y,m,d;
		cout<<"请输入以下数据"<<endl;
		cout<<"编号：";
		cin>>number;
		cout<<"性别：";
		cin>>sex;
		cout<<"生日：";
		cin>>y>>m>>d;
		birthday.Set(y,m,d);
		cout<<"身份证号：";
		cin>>Id;	
}
//打印显示函数 
void Person::os(){
	
		cout<<endl<<"编号："<<number<<endl;
		cout<<"性别："<<sex<<endl;
		cout<<"生日：";
		birthday.show();
		cout<<endl;
		cout<<"身份证号："<<Id<<endl;
}
int main()
{
	Person A;
	A.is();
	A.os();
}