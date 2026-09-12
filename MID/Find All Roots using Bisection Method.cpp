#include <bits/stdc++.h>
using namespace std;
double f(double x)
{
    return x*x*x - 6*x + 4;
}
double bisection(double a, double b)
{
    double c;
    while((b - a) > 0.0005)
    {
        c = (a + b) / 2;
        if(f(a) * f(c) < 0)
            b = c;
        else
            a = c;
    }
    return (a + b) / 2;
}
int main()
{
    cout << "Root 1 = " << bisection(-3, -2) << endl;
    cout << "Root 2 = " << bisection(0, 1) << endl;
    cout << "Root 3 = " << bisection(2, 3) << endl;
    return 0;
}
