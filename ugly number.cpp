#include<iostream>
using namespace std;
int main()
{
    int i=1,c=1;
    while(c!=1500)
    {
        i++;
        if(i%2==0||i%3==0||i%5==0)
            c++;
    }
    cout<<"The 1500'th ugly number is "<<i<<"."<<endl;
}
