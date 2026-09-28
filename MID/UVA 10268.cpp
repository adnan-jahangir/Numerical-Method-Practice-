#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long x;
    string s;

    while (cin >> x)
    {
        cin.ignore();
        getline(cin, s);

        stringstream ss(s);
        vector<long long> a;
        long long num;

        while (ss >> num)
            a.push_back(num);

        int n = a.size() - 1;
        long long ans = 0;

        for (int i = 0; i < n; i++)
            ans = ans * x + a[i] * (n - i);

        cout << ans << endl;
    }
    return 0;
}
