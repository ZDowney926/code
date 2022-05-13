#include<iostream>
#include<iomanip>
using namespace std; //赵凯 计科A2001 2017060315
int main()
{
	for (int i = 1; i < 8; i++)
    {
        cout << setfill(' ') << setw(i) << " " << setfill('m') << setw(15-2*i) << 'm' << endl;
    }
	return 0;
}