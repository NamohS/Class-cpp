#include <iostream>
using namespace std;
class day{
    private:
    int date;
    int year;
    int month;
    


    public:
    void input()
    {
        cout<<"enter date : "<<endl;
        cin>>date;
        cout<<"enter month : "<<endl;
        cin>>month;
        cout<<"enter year : "<<endl;
        cin>>year;

    }

    int leap_checker()
    {
        if(year%4==0&&year%100!=0)
        {
            return 1;

        }
        else if(year%400==0)
        {
            return 1;
        }
        else
        {return 0;}
    }
    
    day agefunction()
    {

        day dob,age;

        cout<<"enter date of birth: "<<endl;
        cin>>dob.date;
        cout<<"enter month of birth: "<<endl;
        cin>>dob.month;
        cout<<"year of birth : "<<endl;
        cin>>dob.year;
        age.year= year-dob.year;
        if(dob.month>month)
        {
            age.year=age.year-1;
            age.month=12+month-dob.month;

        }
        else
        {
            age.month=month-dob.month;
        }
        if(dob.date>date)
        {
            age.month=age.month-1;
            date=30+date-dob.date;
        }
        else{
            age.date=date-dob.date;
        }
        //
        return age;
    }
    double y()  //Getter
 {
    return year;                          
 }
double m()  //Getter
 { return month;
 }
double d()   //Getter
 {return date;}
};





main()
{
    day d1;
    d1.input();
    int leap=d1.leap_checker();
    cout<<"leap year : "<<(leap == 1 ? "true" : "false")<<endl<<endl;
    d1 = d1.agefunction();
    cout<<" age: "<<d1.y()<<"years  ,"<<d1.m()<<"months , "<<d1.d()<<"days.";


}