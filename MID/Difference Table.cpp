#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;

    cout << "Enter number of data points: ";
    cin >> n;

    int x[n], y[n];
    int diff[n][n];

    // Input x values
    cout << "\nEnter x values:\n";
    for (int i = 0; i < n; i++)
        cin >> x[i];

    // Input f(x) values
    cout << "\nEnter f(x) values:\n";
    for (int i = 0; i < n; i++)
    {
        cin >> y[i];
        diff[i][0] = y[i];
    }

    // Calculate differences
    for (int j = 1; j < n; j++)
    {
        for (int i = 0; i < n - j; i++)
        {
            diff[i][j] = diff[i + 1][j - 1] - diff[i][j - 1];
        }
    }



    cout << setw(8) << "x"
         << setw(12) << "f(x)";

    for (int j = 1; j < n; j++)
    {
        cout << setw(12) << ("Delta^" + to_string(j));
    }

    cout << "\n";

    for (int i = 0; i < n; i++)
    {
        cout << setw(8) << x[i];

        for (int j = 0; j < n - i; j++)
        {
            cout << setw(12) << diff[i][j];
        }

        cout << endl;
    }



    return 0;
}
