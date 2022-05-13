#include <iostream>
using namespace std;

class Ball                    //矩形类
{
    public:
        Ball()                //无参构造函数
        {
            r_long = 3;
            r_width = 4;
        }
        Ball(int a,int b)     //有参构造函数
        {
            r_long = a;
            r_width = b;
        }
        int comp_area()        //计算面积
        {
            return r_long*r_width;
        }
        int comp_perimeter()    //计算周长
        {
            return 2*(r_long+r_width);
        }
        int get_long()          //返回矩形的长
        {
            return r_long;
        }
        int get_width()         //返回矩形的宽
        {
            return r_width;
        }
    private:
        int r_long,r_width;     //成员变量长和宽
};

char letter[3] = {'A', 'B', 'C'};
int n, number = 0;

bool judge(string str) {
    if(str.size() < 4) {
        return true;
    }
    for (int i = 0; i < str.size() - 3; ++i) {
        if(str[i] == str[i + 2] && str[i + 1] == str[i + 3]) {
            return false;
        }
    }
    return true;
}

void substring(string str) {
    if(str.length() == n) {
        number++;
        return;
    }
    for (char i : letter) {
        str += i;
        if(judge(str)) {
            substring(str);
        }
        str = str.substr(0, str.length() -1);
    }
}

int main() {
    cin >> n;
    string str;
    substring(str);
    cout << number;
}