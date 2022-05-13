#include <iostream>
using namespace std;
const  float  PI  = 3.14159;

class Circle
{
  private:
    float   radius;  
  public:
    Circle(float r){radius = r;} //构造函数
    void  get_radius(){cout << radius << endl;}
    void  set_radius(float r){radius = r;}
    float  Circumference() const{return 2 * PI * radius;}//圆周长
    float  Area( ) const{return PI * radius * radius;}//圆面积
};

int main ()  {
  	float radius;
  	cout<<"Enter the radius of the Circle: ";
  	cin>>radius;
  	Circle C(radius);
    C.get_radius();
    cout << C.Circumference() << ' ' << C.Area() <<endl;
    cout<<"Fix the radius of the Circle: ";
    cin >> radius;
    C.set_radius(radius);//修改圆的半径
    C.get_radius();
    cout << C.Circumference() << ' ' << C.Area() <<endl;
}
