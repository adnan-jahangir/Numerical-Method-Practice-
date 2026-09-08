#include<bits/stdc++.h>
using namespace std;

double f(double x)
{
    return x*x*x-x-2;
}
int main()
{
    double a,b,c;
    cin>> a>>b;

    while((b-a)>0.0001)
    {
        c=(a+b)/2;
        if(f(a)*f(c)<0)
            b=c;
        else a=c;


    }
    cout<< (a+b)/2;





}
