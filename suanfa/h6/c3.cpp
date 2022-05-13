
#include <stdio.h>
#include <stdlib.h>
#define LEN 10000

int Sum,PrimarySet[LEN+5],NumberAmount;
int SolutionCount=0,SolutionTag[LEN+5];

void Output()
{
	if(SolutionCount==0)
	{
		printf("No Solution!\n");
	}
	else if(SolutionCount==1)
	{
		int SubSet[NumberAmount+5],ElementCnt=0,i;
		for(i=1;i<=NumberAmount;i++)
		{
			if(SolutionTag[i])
			{
				SubSet[ElementCnt++]=PrimarySet[i];
			}
		}
		for(i=0;i<ElementCnt-1;i++)
		{
			printf("%d ",SubSet[i]);
		}
		printf("%d\n",SubSet[i]);
	}
}

void Search(int i,int TW,int RW)
{
	if(i>NumberAmount)
	{
		if(TW==Sum)
		{
			SolutionCount++;
		}
		Output();
		exit(0);
	}
	else
	{
		if(TW+PrimarySet[i]<=Sum)
		{
			SolutionTag[i]=1;
			Search(i+1,TW+PrimarySet[i],RW-PrimarySet[i]);
		}
		if(TW+RW-PrimarySet[i]>=Sum)
		{
			SolutionTag[i]=0;
			Search(i+1,TW,RW-PrimarySet[i]);
		}
	}
}

int main()
{
	scanf("%d%d",&NumberAmount,&Sum);
	int RW=0,i;
	for(i=1;i<=NumberAmount;i++)
	{
		scanf("%d",&PrimarySet[i]);
		RW+=PrimarySet[i];
	}
	Search(1,0,RW);
	return 0;
}