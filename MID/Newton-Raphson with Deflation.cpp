#include <bits/stdc++.h>
using namespace std;
double f(double x)
{
    return x*x*x - 6*x + 4;
}
double df(double x)
{
    return 3*x*x - 6;
}
int main()
{
    double x = 2.5;
    double x1;
    do
    {
        x1 = x - f(x) / df(x);
    x = x1;
    }


    while(fabs(f(x)) > 0.0005);
    double r1 = x;
    cout << "Root 1 = " << r1 << endl;
    // Deflation: x^3 + 0x^2 - 6x + 4
    double b1 = 1;
    double b2 = r1;
    double b3 = r1*r1 - 6;
    // Quadratic solve: x^2 + b2*x + b3 = 0
    double D = b2*b2 - 4*b1*b3;
    double r2 = (-b2 + sqrt(D)) / (2*b1);
    double r3 = (-b2 - sqrt(D)) / (2*b1);
    cout << "Root 2 = " << r2 << endl;
    cout << "Root 3 = " << r3 << endl;
    return 0;
}
