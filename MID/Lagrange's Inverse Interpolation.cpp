
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n = 5;
    double x[] = {1, 2, 3, 4, 5};
    double y[] = {1, 8, 27, 64, 125};
    double yp = 85;
    double result = 0;

    cout << fixed << setprecision(2);
    cout << "\n--- Given Data Table ---\n";
    cout << setw(10) << "x"
         << setw(10) << "f(x)" << "\n";

    for (int i = 0; i < n; i++)
        cout << setw(10) << x[i]
             << setw(10) << y[i] << "\n";

    cout << "------------------------\n";

    for (int i = 0; i < n; i++) {
        double term = x[i];

        for (int j = 0; j < n; j++) {
            if (i != j)
                term *= (yp - y[j]) / (y[i] - y[j]);
        }

        result += term;
    }

    cout << setprecision(5);
    cout << "\nTarget f(x) = " << yp;
    cout << "\nRequired x = " << result << "\n";

    return 0;
}
