
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n = 5;
    double x[] = {1, 3, 4, 6, 10};
    double table[5][5] = {0};
    double y[] = {0, 18, 58, 190, 920};

    for (int i = 0; i < n; i++)
        table[i][0] = y[i];

    // Divided difference table calculation
    for (int j = 1; j < n; j++) {
        for (int i = 0; i < n - j; i++) {
            table[i][j] =
                (table[i + 1][j - 1] - table[i][j - 1])
                / (x[i + j] - x[i]);
        }
    }

    // Display divided difference table
    cout << fixed << setprecision(4);
    cout << "\n--- Divided Difference Table ---\n";

    cout << setw(5) << "x"
         << setw(10) << "f(x)"
         << setw(12) << "1st DD"
         << setw(12) << "2nd DD"
         << setw(12) << "3rd DD"
         << setw(12) << "4th DD" << "\n";

    for (int i = 0; i < n; i++) {
        cout << setw(5) << x[i];

        for (int j = 0; j < n - i; j++)
            cout << setw(12) << table[i][j];

        cout << "\n";
    }

    cout << "-----------------------------------------------\n";

    // Newton's Divided Difference Interpolation
    double xp = 2.7;
    double result = table[0][0];
    double product = 1;

    for (int j = 1; j < n; j++) {
        product *= (xp - x[j - 1]);
        result += product * table[0][j];
    }

    // Display final result separately
cout << "\n========== Final Result ==========\n";

    cout << "Interpolated value f(" << xp
         << ") = " << setprecision(5) << result << "\n";


    return 0;
}
