#include<iostream>
#include<cstring>
using namespace std;

class Person{
	private:
		string name,gender;
        int age;
	public:
        friend void compare_age(Person &a,Person &b);
		Person(string n = "张三",string g = "男",int a = 14):name(n),gender(g),age(a){};
		void set()
        {
            string n,g;
            int a;
            cin >> n >> g >> a;
            name=n;gender=g;age=a;
        }
		void out()
        {
	        cout<< name <<" "<< gender <<" "<<age<<endl;
        }
};

void compare_age(Person &a, Person &b)
{
    if(a.age < b.age)
    cout << b.name << "大" << endl;
    else if(a.age > b.age)
    cout << a.name << "大" << endl;
    else
    cout << "两人一样大" << endl;
}

int main(){
	
	Person A("张三","男",20);
	cout<<"初始值为:";
	A.out();
	cout<<"请输入修改信息:";
	A.set();
	cout<<"修改后信息为:";
	A.out();
    Person B("王五","男",22);
    compare_age(A,B);
}