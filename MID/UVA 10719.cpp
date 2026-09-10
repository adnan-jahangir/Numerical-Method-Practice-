#include <bits/stdc++.h>
using namespace std;

int main() {
    int k, x;
    string line;

    while (cin >> k) {
        cin.ignore();
        getline(cin, line);

        vector<int> a;
        stringstream ss(line);

        while (ss >> x)
            a.push_back(x);

        int n = a.size();


        for (int i = 1; i < n; i++)
            a[i] = a[i] + a[i - 1] * k;

        cout << "q(x):";
        for (int i = 0; i < n - 1; i++)
            cout << " " << a[i];
        cout << endl;

        cout << "r = " << a[n - 1] << endl << endl;
    }

    return 0;
}
