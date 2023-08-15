#include <iostream>
#include <math.h>
using namespace std;

// 153 = (1)^3 + (5)^3 + (3)^3   ==> Armstrong number

int main()
{
    int n, temp;
    cin >> n;
    int sum = 0;
    temp = n;

    while (n > 0)
    {
        int lastdigit = n % 10;
        sum = sum + pow(lastdigit, 3);
        n = n / 10;
    }
    (sum == temp) ? cout << "Armstrong" << endl : cout << "Not Armstrong" << endl;
    return 0;
}