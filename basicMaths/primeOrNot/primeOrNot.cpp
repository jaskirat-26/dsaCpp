#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    bool con = false;
    for (int i = 2; i * i < n; i++)
    {
        if (n % i == 0)
        {
            con = true;
            break;
        }
    }
    !con ? cout << "Prime" << endl : cout << "Not Prime" << endl;
    return 0;
}