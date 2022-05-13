#include <iostream>
using namespace std;
 
int main(){
 
	int n;
    cin>>n;
    int x = 0;
	int s = n;    // 拷贝一份
	while(s>0){
		x = x*10+s%10;    //反向求和，s%10为取s的个位数，例，123取3
		s = s/10;        // 删除s的个位数，例，123变成12
	}
 
	if(x==n){
		cout<<"YES!"<<endl;
	}
	else{
		cout<<"NO!"<<endl;
	}
		return 0;
}