#include<iostream>
using namespace std;		
enum CPU_Rank{P1=1,P2,P3,P4,P5,P6,P7};	
class CPU{
	private:
		CPU_Rank rank;	//枚举类型rank 
		int frequency;
		float voltage;
	public:
		CPU(int r,int f,int v);	//构造函数 
		void run();		
		void stop();
		~CPU(){		//析构函数 
			cout<<"析构了一个CPU~"<<endl;
		}
};
//构造函数的实现 
CPU::CPU(int r,int f,int v) {		
	rank=(CPU_Rank)r;
	frequency=f;
	voltage=v;
	cout<<"等级:"<<P1<<endl;
	cout<<"频率:"<<frequency<<"MHz"<<endl;
	cout<<"电压:"<<voltage<<"V"<<endl;
	cout<<"构造了一个CPU~"<<endl; 
}
void CPU::run(){
	cout<<"程序开始运行"<<endl; 
}
void CPU::stop(){
	cout<<"程序结束运行"<<endl; 
}
int main(){
	CPU A(P1,50,220);	
	A.run();
	A.stop();
}