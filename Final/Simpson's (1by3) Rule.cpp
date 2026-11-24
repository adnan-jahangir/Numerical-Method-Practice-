#include<bits/stdc++.h>
using namespace std;

int main() {
    double a = 0, b = 2, h, sum;
    int n;

    cin >> n;

    if(n%2 != 0) {
        cout << "Invalid n";
        return 0;
    }

    h = (b-a)/n;
    sum = exp(-a) + exp(-b);

    for(int i=1; i<n; i++) {
        double x = a+i*h;

        if(i%2 == 0)
            sum += 2*exp(-x);
        else
            sum += 4*exp(-x);
    }

    cout << "Area = " << (h/3)*sum << endl;

    return 0;
}
