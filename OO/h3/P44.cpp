#include <bits/stdc++.h>
using namespace std;

class my_string{
	char* str;
	int len;
public:
	my_string(const char* s = ""){
        len = strlen(s);
        str = new char[len + 1];
        strcpy(str, s);
	}
	~my_string(){delete[]str;}
	friend ostream& operator<<(ostream &os, const my_string &s);
	my_string& operator=(const my_string& s);
};

my_string& my_string::operator= (const my_string& s) {    
//赋值之前先进行自赋值检测
    if(this == &s)  	return *this;
    delete[] str;
    len = s.len;
    str = new char[len + 1];
    strcpy(str, s.str);
    return *this;
}	

ostream& operator<<(ostream &os, const my_string &s){
    os << s.str;    //加了一个输出运算符的重载
    return os;
}

int main(){
    my_string a("abcde"),  b("hijk");
    a = b;		//如何赋值？
    cout << a;
}
