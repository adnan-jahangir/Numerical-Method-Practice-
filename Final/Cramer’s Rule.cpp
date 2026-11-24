//Problem A

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        double a[3][4];

        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 4; j++)
            {
                cin >> a[i][j];
            }
        }

        double d, d1, d2, d3;

        d = a[0][0] * (a[1][1]*a[2][2] - a[1][2]*a[2][1])
            - a[0][1] * (a[1][0]*a[2][2] - a[1][2]*a[2][0])
            + a[0][2] * (a[1][0]*a[2][1] - a[1][1]*a[2][0]);


        d1 = a[0][3] * (a[1][1]*a[2][2] - a[1][2]*a[2][1])
             - a[0][1] * (a[1][3]*a[2][2] - a[1][2]*a[2][3])
             + a[0][2] * (a[1][3]*a[2][1] - a[1][1]*a[2][3]);


        d2 = a[0][0] * (a[1][3]*a[2][2] - a[1][2]*a[2][3])
             - a[0][3] * (a[1][0]*a[2][2] - a[1][2]*a[2][0])
             + a[0][2] * (a[1][0]*a[2][3] - a[1][3]*a[2][0]);


        d3 = a[0][0] * (a[1][1]*a[2][3] - a[1][3]*a[2][1])
             - a[0][1] * (a[1][0]*a[2][3] - a[1][3]*a[2][0])
             + a[0][3] * (a[1][0]*a[2][1] - a[1][1]*a[2][0]);

        cout << fixed << setprecision(0);
        cout << d1 << " " << d2 << " " << d3 << " " << d << endl;

        if (d == 0)
        {
            cout << "No unique solution" << endl;
        }
        else
        {
            double x1 = d1 / d;
            double x2 = d2 / d;
            double x3 = d3 / d;

            if (fabs(x1) < 0.0005) x1 = 0;
            if (fabs(x2) < 0.0005) x2 = 0;
            if (fabs(x3) < 0.0005) x3 = 0;

            cout << fixed << setprecision(3);
            cout << "Unique solution: "
                 << x1 << " " << x2 << " " << x3 << endl;
        }

        cout << endl;
    }

    return 0;
}
