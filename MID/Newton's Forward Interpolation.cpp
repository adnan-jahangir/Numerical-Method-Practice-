
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n = 5;
    double x[5] = {1, 2, 3, 4, 5};
    double y[5] = {1, 8, 27, 64, 125};
    double d[5][5] = {};

    for (int i = 0; i < n; i++)
        d[i][0] = y[i];

    for (int j = 1; j < n; j++)
        for (int i = 0; i < n - j; i++)
            d[i][j] = d[i + 1][j - 1] - d[i][j - 1];

    double xp = 1.7;
    double h = x[1] - x[0];
    double u = (xp - x[0]) / h;
    double result = d[0][0];
    double term = 1;

    for (int j = 1; j < n; j++) {
        term *= (u - (j - 1)) / j;
        result += term * d[0][j];
    }

    cout << fixed << setprecision(5);
    cout << "y(1.7) = " << result << endl;

    return 0;
}
