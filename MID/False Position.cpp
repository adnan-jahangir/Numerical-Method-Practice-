#include <bits/stdc++.h>
using namespace std;

double f(double x) {
    return x*x*x - x + 2;
}

int main() {
    double a,b,c;
    cin>>a>>b;

    while (true) {
        c = (a * f(b) - b * f(a)) / (f(b) - f(a));

        if (fabs(f(c)) < 0.0005)
            break;

        if (f(a) * f(c) < 0)
            b = c;
        else
            a = c;
    }

    cout << fixed << setprecision(3)<< c << endl;

    return 0;
}
