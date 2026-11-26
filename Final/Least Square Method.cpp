
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    double x[100], y[100];
    double sx = 0, sy = 0, sxy = 0, sx2 = 0;

    for(int i = 0; i < n; i++)
        cin >> x[i];

    for(int i = 0; i < n; i++)
        cin >> y[i];

    for(int i = 0; i < n; i++)
    {
        sx += x[i];
        sy += y[i];
        sxy += x[i] * y[i];
        sx2 += x[i] * x[i];
    }

    double b = (n * sxy - sx * sy) / (n * sx2 - sx * sx);
    double a = (sy - b * sx) / n;

    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    cout << "Equation: y = " << a << " + " << b << "x";

    return 0;
}
