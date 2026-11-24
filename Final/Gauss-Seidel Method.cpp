#include<bits/stdc++.h>
using namespace std;

int main() {
    double x=0, y=0, z=0;
    double x1, y1, z1;
    int n=0;

    do {
        x1 = (12-y-z)/10;
        y1 = (13-2*x1-z)/10;
        z1 = (14-2*x1-2*y1)/10;

        double error = max({
            fabs(x1-x),
            fabs(y1-y),
            fabs(z1-z)
        });

        x=x1;
        y=y1;
        z=z1;

        n++;

        if(error < 0.00001)
            break;

    } while(n < 1000);

    cout << fixed << setprecision(4);

    cout << "x1 = " << x << endl;
    cout << "x2 = " << y << endl;
    cout << "x3 = " << z << endl;

    return 0;
}
