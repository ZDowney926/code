#include<iostream>
using namespace std;
//函数：求最大公约数、最小公倍数 
void gcd_lcm(int a,int b,int* gcd,int* lcm)  
{
	for(int i=1;i<=(a<b?a:b);i++){
		if(a%i==0&&b%i==0)
		*gcd=i;     //最大公约数 
	} 	*lcm=a*b/(*gcd);	//最小公倍数 
}
int main()
{
	int a,b;
	int gcd,lcm;
	cin>>a>>b;
	gcd_lcm(a,b,&gcd,&lcm);	//调用函数 
	cout<<"最大公约数:"<<gcd<<endl<<"最小公倍数:"<<lcm<<endl;
}