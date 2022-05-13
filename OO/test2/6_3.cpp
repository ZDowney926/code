#include <bits/stdc++.h>
using namespace std;
 
class vehicle{
  public:
    void  virtual Run(){
        cout<<"Vehicle is runing!"<<endl;
            }
    void  virtual Stop(){
        cout<<"Vehicle stopped!"<<endl;
            }
};
 
class bicycle: public vehicle{
  public:
    void virtual Run(){
        cout<<"Bicycle is runing!"<<endl;
            }
    void virtual Stop(){
        cout<<"Bicycle stopped!"<<endl;
            }
};
 
class motorcar:virtual public vehicle{
  public:
    void  Run(){
        cout<<"Motorcar is runing!"<<endl;
            }
    void  Stop(){
        cout<<"Motorcar stopped!"<<endl;
            }
};
 
class motorcycle: public bicycle, public motorcar{
  public:
    void  Run(){
        cout<<"motorcycle is runing!"<<endl;
            }
    void  Stop(){
        cout<<"motorcycle stopped!"<<endl;
            }
};
 
int main()
{
    vehicle ve;
    bicycle bi;
    motorcar mo;
    motorcycle moc;
    ve. Run();
    ve. Stop();
    bi. Run();
    bi. Stop();
    mo. Run();
    mo. Stop();
    moc. Run();
    moc. Stop();
    cout << "==========================================" << endl;
    vehicle *p;
    p=&ve;
    p-> Run();
    p-> Stop();
    p=&bi;
    p->Run();
    p->Stop();
    p=&mo;
    p->Run();
    p->Stop();
   // p=&moc;//此处需要注释掉，否则会出现二意，无法编译通过，因为motorcycle继承了motorcar
    p->Run();
    p->Stop();
    return 0;
}