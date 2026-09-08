#include <bits/stdc++.h>
using namespace std;

double f(double x) {
    return x*x*x - 6*x + 4;
}

double df(double x) {
    return 3*x*x - 6;
}

int main() {
    double x0 = 0.8;
    double x1;

    while (true) {
        x1 = x0 - f(x0) / df(x0);

        if (fabs(x1 - x0) < 0.0005)
            break;

        x0 = x1;
    }

    cout << fixed << setprecision(3)<< x1 << endl;

    return 0;
}
