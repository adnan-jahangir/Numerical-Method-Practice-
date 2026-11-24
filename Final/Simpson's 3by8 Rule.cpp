#include<bits/stdc++.h>
using namespace std;

double f(double x) {
    return x/(1+x*x);
}

int main() {
    double a = 1, b = 4, h, sum;
    int n;

    cin >> n;

    if(n%3 != 0) {
        cout << "Invalid n";
        return 0;
    }

    h = (b-a)/n;
    sum = f(a)+f(b);

    for(int i=1; i<n; i++) {
        double x = a+i*h;

        if(i%3 == 0)
            sum += 2*f(x);
        else
            sum += 3*f(x);
    }

    cout << "Area = " << (3*h/8)*sum << endl;

    return 0;
}
