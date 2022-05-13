#include<iostream>
#include<string>

// int型  
int plus(int a,int b){
	return a+b;
}
// double型 
double plus(double a,double b){
	return a+b;
}
// string型 
std::string plus(std::string a,std::string b){
	return a+b;
}
int main(){
	int n=plus(3,4);
	double d=plus(3.4,4.7);
	std::string str=plus("aa","bbb");
	std::cout<<"n="<<n<<std::endl<<"d="<<d<<std::endl<<"str="<<str;
}