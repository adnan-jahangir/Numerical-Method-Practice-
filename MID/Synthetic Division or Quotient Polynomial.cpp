#include <iostream>
using namespace std;
int main()
{
    double a[] = {1, -5, 10, -8};
    double root = 2;
    double b[4];
    b[0] = a[0];
    for(int i = 1; i < 4; i++)
    {
        b[i] = a[i] + root * b[i-1];
    }
    cout << "Quotient polynomial = ";
    cout << b[0] << "x^2 ";
    if(b[1] >= 0)
        cout << "+ " << b[1] << "x ";
    else
        cout << "- " << -b[1] << "x ";
    if(b[2] >= 0)
        cout << "+ " << b[2];
    else
        cout << "- " << -b[2];
    cout << endl;
    return 0;
}
