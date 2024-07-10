#include<iostream>
using namespace std;
class Zeller
{
    public:
    int day,month,year;
    Zeller(int d,int m,int y)
    {
       day=d;
       month=m;
       year=y;
    }
    string weekday()
    {
        int s=(day+26*(month+1)/10+year+year/4-year/100+year/400)%7;
        if(s==0)
           return "Saturday";
        else if(s==1)
            return "Sunday";
       else if(s==2)
            return "Monday";
        else if(s==3)
            return "Tuesday";
        else if(s==4)
            return "Wednesday";
        else if(s==5)
            return "Thursday";
        else if(s==6)
            return "Friday";
    }
};
int main()
{
    Zeller st(29,5,2013);
    //Zeller st(30,10,2015);
    cout<<"May 29, 2013 "<<st.weekday()<<endl;
}
