#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<malloc.h>
using namespace std;
int book[10];
int a[10];
int n;
void dfs(int step){
    int i;
    if(step==n+1){
        for(i=1;i<=n;i++)
            printf("%d ",a[i]);
        printf("\n");
        return;
    }
    for(i=1;i<=n;i++){
        if(book[i]==0){
            a[step]=i;
            book[i]=1;
            dfs(step+1);
            book[i]=0;
        }
    }
    return;
}
int main(){
    while(~scanf("%d",&n)&&n!=0){
        dfs(1);
    }
    return 0;
}