#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
bool Neighbor(int a, int b)
{
    return (a==b+1)||(a==b-1)?1:0;
}
bool Neighbor(int a, int b, int c)
{
    if(a==b-1&&a==c-2)
        return 1;
    else if(a==c-1&&a==b-2)
        return 1;
    else if(b==a-1&&b==c-2)
        return 1;
    else if(b==c-1&&b==a-2)
        return 1;
    else if(c==a-1&&c==b-2)
        return 1;
    else if(c==b-1&&c==c-2)
        return 1;
    else
        return 0;
}
int main()
{
   int a, b, c, d, e;
   cin >> a >> b >> c >> d >> e;
   if (Neighbor(a, b)) //调用重载函数Neighbor()
      cout << "true" << endl;
   else
      cout << "false" << endl;
   if (Neighbor(c, d, e)) //调用重载函数Neighbor()
      cout << "true" << endl;
   else
      cout << "false" << endl;
   return 0;
}