#include<iostream>
#include<cstdio>
#include<cstring>
#include <stdlib.h>
using namespace std;
char a[1000];//用来存储当前位置所选取的字符
int ans;//用于统计所有可能的序列总数
int num = 5;
/**
回溯法实现-有重复字符排序问题：
能排除相同字符重排序的根本是因为在调用回溯之前，所有字符按重复排列好，由于回溯上一步时，虽然当前字符被++，
循环遍历也不会再考虑选择当前字符，而是会选择当前字符的下一个字符，直到回溯到第一个字符选择新的可能字符

*/
void dfs(int dep,char *p,int *q)
{
    int r;
    if (dep==num)//表示排序完所有字符
    {
        ans++;//记录方案总数
        for (r=0; r<num; ++r)
            printf("%c",a[r]);//输出当前排序在a数组中的字符串
        printf("\n");
        return;
    }
    for (r=0; p[r]!='#'; ++r)
        if (q[r]>0)//如果这个字母没有取完
        {
            a[dep]=p[r];//a依然是记录数组
            q[r]--;//计数器-1
            dfs(dep+1,p,q);
            q[r]++;//回溯一步
        }
}
/***
对所有出现的字符进行统计出现的次数，按首次出现顺序存入p指针，出现次数存入q指针
*/
int strtj(char *p,int *q)
{
    int i,j,k;
    for(i=0; i<num; i++)
    {
        if(p[i]!='#')
        {
            q[i]=1;
            for(j=i+1; j<num; j++)
            {
                if(p[i]==p[j])
                {
                    p[j]='#';
                    q[j]=0;
                    q[i]++;
                }
            }
        }
    }
    for(j=0,i=0; i<num; i++,j++)
    {
        if(p[j]=='#')
        {
            for(k=j; k<num; k++)
            {//然后回溯到上一个位置遍历另一种可能（指的是所有不同字符中剩下的可选字符），
                p[k]=p[k+1];
                q[k]=q[k+1];
            }
            j--;
        }
    }
    p[j]='#';
    q[j]=0;
    return 0;
}
int main()
{
    char *p;
    int *q;
    int i=0,j=0,n=0,k=0;
	cin >> num;
    p=(char *)malloc(num*sizeof(char));
    q=(int *)malloc(num*sizeof(int));
    for(i=0; i<num&&p[i]!='\n'; i++)
        cin>>p[i];
    for(i=0; i<num; i++)
    {
        q[i]=0;
    }
    strtj(p,q);//统计每个字符出现的次数，并存入p q指针中
    dfs(0,p,q);//回溯构建所有可能的序列，输出所有可能的序列
    printf("%d",ans);//输出所有可能的总数
    return 0;
}