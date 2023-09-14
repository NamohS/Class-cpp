#include <iostream>
using namespace std;
class rectangle{
    private:
    double length=1;
    double width=2;
    public:
double area();
};
double rectangle::area()
{
	return length*width;
}
class cuboid:public rectangle{
	private:
		double height=3;
	public:
		double volume();
};
	double cuboid::volume()
		{
			return area()*height;
			
		}
main()
{
    rectangle R;
    cuboid C;
    cout<<R.area()<<endl;
    cout<<C.volume()<<endl;
    cout<<C.area()<<endl;
}
