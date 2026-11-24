#include<bits/stdc++.h>
using namespace std;

int main() {
    double a = 1, b = 5, h, sum;
    int n;

    cin >> n;

    h = (b-a)/n;
    sum = log10(a) + log10(b);

    for(int i=1; i<n; i++) {
        double x = a+i*h;
        sum += 2*log10(x);
    }

    cout << "Area = " << (h/2)*sum << endl;

    return 0;
}
