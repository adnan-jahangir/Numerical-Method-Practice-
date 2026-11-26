
#include <bits/stdc++.h>
using namespace std;

int main() {
    double x = 0, y = 1, h = 0.01;

    while (x < 0.02) {
        y = y + h * (pow(x, 3) + y);
        x = x + h;
    }

    cout << fixed << setprecision(6);
    cout << "y(0.02) = " << y << endl;

    return 0;
}
