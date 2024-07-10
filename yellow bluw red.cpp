#include<bits/stdc++.h>
#include<math.h>
using namespace std;
int main()
{
    int a,b,c;
    double s,yellow,blue,red,r,triangle,circle,r2,PI=acos(-1);
    while(cin>>a>>b>>c&&a>0&&a<=b&&b<=c&&b>0&&c>0&&c<=1000)
    {
            s=(a+b+c)/2;
            triangle=sqrt(s*(s-a)*(s-b)*(s-c));
            r2=triangle/s;
            red=PI*r2*r2;
            r=a*b*c/sqrt(2*s*(b+c-a)*(c+a-b)*(a+b-c));
            circle=PI*r*r;
            yellow=circle-triangle;
            blue=triangle-red;
            printf("%.4lf %.4lf %.4lf\n",yellow,blue,red);
    }

}
