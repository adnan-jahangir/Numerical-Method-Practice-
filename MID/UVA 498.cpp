#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s1, s2;

    while (getline(cin, s1) && getline(cin, s2))
    {
        stringstream a(s1), b(s2);

        vector<long long> c;
        vector<long long> x;
        long long num;

        while (a >> num) c.push_back(num);
        while (b >> num) x.push_back(num);

        for (int i = 0; i < x.size(); i++)
        {
            long long ans = 0;

            for (int j = 0; j < c.size(); j++)
                ans = ans * x[i] + c[j];

            if (i) cout << " ";
            cout << ans;
        }
        cout << "\n";
    }

    return 0;
}
