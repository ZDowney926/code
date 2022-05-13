#include <iostream>
#include <cmath>
#include <ctime>
using namespace std;

const int maxSize = 10;      
int x[maxSize];             
int flag[maxSize][maxSize]; 


void calcFlag(int k, int N){
    for (int i = 0; i < N; ++i) {
        flag[k][i] = 1;
    }
    
    for(int i = 0; i < k; ++i) {         flag[k][x[i]] = 0;          
        if(x[i] + abs(i-k) < N)               flag[k][x[i] + abs(i-k)] = 0;
        if (x[i] - abs(i-k) > -1)             flag[k][x[i] - abs(i-k)] = 0;
    }
}

void Print(int N){
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            if(x[i] != j) {
                printf(" ");
            } else {
                printf("▇\n");
                break;
            }
        }
    }
    printf("---------\n");
}

/**
 k the current deepth( from 0 to n-1) in the Solution Space Tree
 N the scale of the problem
 return number of solution
 */
int Recursive_BackTrack(int k, int N){
    int solutionCount = 0;
    
    if(k == N){
        // Print(N);
        return 1;
    }
    
    calcFlag(k, N);
    for (int i = 0; i < N; ++i) {
        if(flag[k][i]) {
            x[k] = i;
            solutionCount += Recursive_BackTrack(k+1, N);
        }
    }
    return solutionCount;
}

/**
 N the scale of the problem
 return number of solution
*/
int Iterated_BackTrack(int N){
    int solutionCount = 0, k = 0;           
    for (int i = 0; i < maxSize; ++i) {         
        x[i] = -1;
    }
    
    calcFlag(0, N);
    while (k > -1) {             
        if(k == N){                  
            // Print(N);
            ++solutionCount;
            --k;
            continue;
        }
        
        if(++x[k] < N){              
            if (flag[k][x[k]] == 1) {
                ++k;                     
                calcFlag(k, N);
            } 
            else {}
        } 
        else {                     
            x[k--] = -1;           
        }
    }
    
    return solutionCount;
}

int main(int argc, const char * argv[]) 
{
    while(1)
    {
        int n;
        cin >> n;
        if(n==0) break;
        int count;
        count = Iterated_BackTrack(n);
        
        cout<< count <<endl;
    }
    return 0;
}