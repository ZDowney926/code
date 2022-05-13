#include <bits/stdc++.h>
using namespace std;
#define MAXLEN 100
 
int main(int argc, char **argv)
{
    char x[MAXLEN];
    char y[MAXLEN];
    while(cin >> x >> y)
    {
        int b[MAXLEN][MAXLEN];
        int c[MAXLEN][MAXLEN];
        int m, n;
        n = strlen(x);
        m = strlen(y);
        
        for(int i=1;i<=n;i++) c[i][0]=0;
        for(int j=1;j<=m;j++) c[0][j]=0;

        for(int i=1;i<=n;i++)
        {
	        for(int j=1;j<=m;j++)
            {
		        if(x[i]==y[j])
                {
                    c[i][j]=c[i-1][j-1]+1;
                    b[i][j]=1;	//1代表“↖”			
                }
                else if(c[i-1][j]>c[i][j-1])
                {
                    c[i][j]=c[i-1][j];
                    b[i][j]=2; //2代表“↑”		
                }
                else
                {
                    c[i][j]=c[i][j-1];
                    b[i][j]=3; //3代表“←”		
                }
	        }
        }

        cout << c[n][m] << endl;
    }
    
    return 0;
}
