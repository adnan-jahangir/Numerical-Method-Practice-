#include <bits/stdc++.h>
using namespace std;

int main() {
    string line;
    vector<int> numbers;
    int num;

    getline(cin, line);

    stringstream ss(line);

    while (ss >> num) {
        numbers.push_back(num);
    }


    for (int i = 0; i < numbers.size(); i++) {
        cout << numbers[i] << " ";
    }

     cout << "\n " << numbers.size() << endl;
    return 0;
}