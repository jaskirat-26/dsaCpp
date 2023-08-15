#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    int h = max(a, max(b, c));
    (2 * h * h == a * a + b * b + c * c) ? cout << "Yes" << endl : cout << "No" << endl;
    return 0;
}