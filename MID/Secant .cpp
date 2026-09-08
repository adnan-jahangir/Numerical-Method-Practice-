#include <bits/stdc++.h>
using namespace std;

double f(double x) {
    return x*x*x - 5*x*x - 29;
}

int main() {
    double x0 , x1 , x2;
cin>> x0>>x1;
    while (true) {
        x2 = x1 - (f(x1) * (x1 - x0)) / (f(x1) - f(x0));

        if (fabs(x2 - x1) < 0.0005)
            break;

        x0 = x1;
        x1 = x2;
    }

    cout << fixed << setprecision(3)<< x2 << endl;

    return 0;
}
