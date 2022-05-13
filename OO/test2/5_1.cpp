#include <bits/stdc++.h>
using namespace std;

class Animal
{
    public:
        int age;
};

class Dog:public Animal
{
    public:
        void setAge(int n)
        {
            age = n; //公有继承下成员函数不能访问基类中的私有成员
        }
};

int main()
{
    Dog wang;
    wang.setAge(5);
}