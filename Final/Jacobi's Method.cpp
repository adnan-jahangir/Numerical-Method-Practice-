#include<bits/stdc++.h>
using namespace std;

int main() {
    double x=0, y=0, z=0;
    double x1, y1, z1;
    int n=0;

    do {
        x1 = (95-11*y+4*z)/83;
        y1 = (104-7*x-13*z)/52;
        z1 = (71-3*x-8*y)/29;

        n++;

        double error = max({
            fabs(x1-x),
            fabs(y1-y),
            fabs(z1-z)
        });

        x=x1;
        y=y1;
        z=z1;

        if(error < 0.00001)
            break;

    } while(n < 1000);

    cout << fixed << setprecision(4);

    cout << "x = " << x << endl;
    cout << "y = " << y << endl;
    cout << "z = " << z << endl;

    return 0;
}
