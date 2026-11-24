#include<bits/stdc++.h>
using namespace std;

int main() {
    double a[3][4] = {
        {2,1,1,10},
        {1,4,9,16},
        {3,2,3,18}
    };

    for(int i=0; i<3; i++) {
        for(int k=i+1; k<3; k++) {
            double factor = a[k][i]/a[i][i];

            for(int j=i; j<4; j++) {
                a[k][j] -= factor*a[i][j];
            }
        }
    }

    double x[3];

    for(int i=2; i>=0; i--) {
        x[i] = a[i][3];

        for(int j=i+1; j<3; j++) {
            x[i] -= a[i][j]*x[j];
        }

        x[i] /= a[i][i];
    }

    cout << "x = " << x[0] << endl;
    cout << "y = " << x[1] << endl;
    cout << "z = " << x[2] << endl;

    return 0;
}
