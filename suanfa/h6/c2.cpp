#include <iostream>
#include <fstream>
using namespace std;
bool out=1;
class SubGroup{
    public:
        void Backtrack(int); 
        void output();
        int rest(int);
        SubGroup(int n,int c,int *a){
            this->n=n;
            this->c=c;
            currc=0;
            x=new int[n];
            w=new int[n];
            for(int i=0;i<n;i++)
                w[i]=a[i];
            found=false;
        }
        bool found; 
    private:
        int n;
        int c;
        int currc;//当前累加值 
        int *x;//路径信息 
        int *w;// 值 
};
ifstream in("input.txt");
ofstream out("output.txt");
  
void SubGroup::output(){
    for(int i=0;i<n;i++)
        if(x[i])
            out<<w[i]<<' ';
    out<<'\n';
}
  
int SubGroup::rest(int t){
    int sum=0;
    for(int i=t;i<n;i++)
        sum+=w[i];
    return sum;
}
  
void SubGroup::Backtrack(int t){
    if(out == 0) return;
    if(t==n){//到达叶子节点 ，得到了可行解 
        output();   
        found=true;
        out = 0;
        return;
    }
    //左子树
    if(w[t]+currc<=c){
        currc+=w[t];
        x[t]=1;
        Backtrack(t+1);
        x[t]=0;
        currc-=w[t];
    }
    //右子树
    x[t]=0;
    if(currc+rest(t+1)<c) //剪枝 
        return;//回溯
    else
        Backtrack(t+1); 
}
int main(){
    int n,c,i=0;
    while(in>>n){
        in>>c;
        out = 1;
        int x[n];
        for(int i=0;i<n;i++)
            in>>x[i];
        SubGroup sb(n,c,x);
        sb.Backtrack(0);
        if(!sb.found) 
            out<<"No Solution!"<<'\n';
    }
    in.close();
    out.close();
    return 0;
}