#include<iostream>
using namespace std;
class Student{			//声明一个结构体 
	public:
    double score[4];
}s[3];

void average(){		//求平均成绩 
	
	double sum=0,sum1=0,sum2=0,sum3=0;
	double ave_all,ave1,ave2,ave3;
	for(int i=0;i<3;i++){		//总平均成绩 
		for(int j=0;j<4;j++)
		sum+=s[i].score[j];
	}	ave_all=sum/12;sum=0;
	for(int i=0;i<4;i++){		//各学生平均成绩 
		sum1+=s[0].score[i];
		sum2+=s[1].score[i];
		sum3+=s[2].score[i];	
	}ave1=sum1/4; ave2=sum2/4; ave3=sum3/4;	
	cout<<"总平均成绩:"<<ave_all<<endl		//打印结果 
	<<"学生1:"<<ave1<<endl
	<<"学生2:"<<ave2<<endl
	<<"学生3:"<<ave3;
}
int main(){
	for(int i=0;i<3;i++){  //输入成绩表
		for(int j=0;j<4;j++)
		cin>>s[i].score[j];
	}
	cout<<endl;
	average();
}