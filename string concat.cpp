#include<iostream>
using namespace std;
class a
{
public:

   string name="Sadia is a good girl...";

};
class b
{
public:
    string name2=" Meem pocha meye";

};
class c:public a,public b
{
public:
    void output()
    {


   string s=name+name2;
   cout<<s;
    }
};
int main()
{
    c obj;
    obj.output();
}
