#include<iostream>
#include<algorithm>
using namespace std;
//判断是否为三角形、直角三角形 
void tria(int a,int b, int c){
	if(a+b>c&&a+c>b&&b+c>a){
		cout<<"是三角形"; 
        if(c*c==a*a+b*b)
        {
            cout<<"且是直角三角型";
        }
        else
            cout<<"但不是直角三角形";
	}else
		cout<<"不是三角形"; 
}
int main(){
	int a,b,c;
	int dat[3];
	for(int i=0;i<3;i++)
	cin>>dat[i];
	sort(dat,dat+3);	//从小到大排序 
	a=dat[0];b=dat[1];c=dat[2];
	tria(a,b,c);
} 