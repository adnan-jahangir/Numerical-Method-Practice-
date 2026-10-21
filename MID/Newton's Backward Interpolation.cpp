
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n = 5;
    double x[] = {1, 2, 3, 4, 5};
    double y[] = {1, 8, 27, 64, 125};
    double table[5][5] = {0};

    for (int i = 0; i < n; i++)
        table[i][0] = y[i];

    for (int j = 1; j < n; j++)
        for (int i = 0; i < n - j; i++)
            table[i][j] =
                table[i + 1][j - 1] - table[i][j - 1];

    cout << fixed << setprecision(2);
    cout << "\n------ Backward Difference Table ------\n";

    cout << setw(5) << "x"
         << setw(10) << "y"
         << setw(10) << "Del1"
         << setw(10) << "Del2"
         << setw(10) << "Del3"
         << setw(10) << "Del4" << "\n";

    for (int i = 0; i < n; i++) {
        cout << setw(5) << x[i];
        for (int j = 0; j < n - i; j++)
            cout << setw(10) << table[i][j];
        cout << "\n";
    }

    double xp = 4.7;
    double h = x[1] - x[0];
    double u = (xp - x[n - 1]) / h;
    double result = y[n - 1], term = 1;

    for (int j = 1; j < n; j++) {
        term *= (u + j - 1) / j;
        result += term * table[n - j - 1][j];
    }

    cout << "\nInterpolated value at x  "
         << "("<<xp<<")" << " = " << setprecision(5)
         << result << "\n";

    return 0;
}
