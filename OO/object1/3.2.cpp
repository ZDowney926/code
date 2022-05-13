#include <iostream>
using namespace std;
const  float  PI  = 3.14159;

class Rectangle
{
  private:
    float   r_long,r_width;  
  public:
    Rectangle(float l, float w){r_long = l;r_width = w;} //构造函数
    float  get_long(){return r_long;}
    void  set_long(float l){r_long = l;}
    float  get_width(){return r_width;}
    void  set_width(float w){r_width = w;}
    float  Circumference() const{return (r_long+r_width)*2;}//圆周长
    float  Area( ) const{return r_long*r_width;}//圆面积
};

int main ()  {
  	float l,w;
  	cout<<"Enter the long and width of the Rectangle: ";
  	cin>> l >> w;
  	Rectangle R(l,w);
    cout << R.get_long() << ' ' << R.get_width() << ' ' << R.Circumference() << ' ' << R.Area() <<endl;
    cout<<"Fix the long and width of the Rectangle: ";
  	cin>> l >> w;
  	R.set_long(l);
    R.set_width(w);
    cout << R.get_long() << ' ' << R.get_width() << ' ' << R.Circumference() << ' ' << R.Area() <<endl;
}
