#include <iostream>
using namespace std;
class cube
{
    public:
    double height=1.0;
    double width=1.0;
    double length=1.0;

};
int main()
{
    struct cube cu1;
    cin>>cu1.height;
    cin>>cu1.length;
    cin>>cu1.width;
    double vol=cu1.height*cu1.length*cu1.width;
    cout<<vol;



}
