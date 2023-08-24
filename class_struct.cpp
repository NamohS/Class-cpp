#include <iostream>
using namespace std;
class cube
{
    private:
    double height=1.0;
    double width=1.0;
    double length=1.0;
    public:
    double volume()    
 {
    return height*length*width;
 }
 void update()  //Setter
 {
cin>>height;

 }
 double h()  //Getter
 {
    return height;                          
 }
double l()  //Getter
 { return length;
 }
double b()   //Getter
 {return width;}

    void input()
    {cin>>height;  //Setter
    cin>>length;
    cin>>width;}
    cube()  //Constructor
    {cin>>height;
    cin>>length;
    cin>>width;}
    ~cube(){
        cout<<"Destructor";
    }  //Destructor
};

int main()
{ 
    cube cu1; 
    double vol=cu1.volume();
    cout<<vol<<endl;
    cout<<"enter height"<<endl;
    cu1.update();
    vol=cu1.volume();
    cout<<"volume of a cube having height,breadth and length "<<cu1.h()<<" "<<cu1.b()<<" "<<cu1.l()<<endl;
    cout<<vol<<endl;

}