#include<bits/stdc++.h>
using namespace std;

int main() {
    double a[3][6] = {
        {1,1,1,1,0,0},
        {1,2,3,0,1,0},
        {1,3,4,0,0,1}
    };

    double B[3] = {1,6,6};

    for(int i=0; i<3; i++) {
        double pivot = a[i][i];

        for(int j=0; j<6; j++)
            a[i][j] /= pivot;

        for(int k=0; k<3; k++) {
            if(k != i) {
                double factor = a[k][i];

                for(int j=0; j<6; j++)
                    a[k][j] -= factor*a[i][j];
            }
        }
    }

    double x[3] = {0,0,0};

    for(int i=0; i<3; i++) {
        for(int j=0; j<3; j++) {
            x[i] += a[i][j+3]*B[j];
        }
    }

    cout << "x = " << x[0] << endl;
    cout << "y = " << x[1] << endl;
    cout << "z = " << x[2] << endl;

    return 0;
}
