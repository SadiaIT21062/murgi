#include<iostream>
using namespace std;
class publication{
public:
    string title;
    float price;

    void getdata()
    {
        cin>>title>>price;
    }
    void putdata()
    {
        cout<<"title is "<<title<<endl<<"price is "<<price<<endl;
    }
};
class book:public publication{
public:
    int page;
    void getdata()
    {
        publication::getdata();
        cin>>page;
    }
    void putdata()
    {
        publication::putdata();
        cout<<"page is "<<page<<endl;
    }
};
class tape:public publication{
public:
    float time;
    void getdata()
    {
        publication::getdata();
        cin>>time;
    }
    void putdata()
    {
        publication::putdata();
        cout<<"time is "<<time<<endl;
    }
};
int main()
{
    tape o;
    o.getdata();
    o.putdata();

    book s;
    s.getdata();
    s.putdata();
}

