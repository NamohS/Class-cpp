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
    void input()
    {cin>>height;
    cin>>length;
    cin>>width;}
};

int main()
{
    cube cu1;
    cu1.input();
    double vol=cu1.volume();
    cout<<vol;



}
