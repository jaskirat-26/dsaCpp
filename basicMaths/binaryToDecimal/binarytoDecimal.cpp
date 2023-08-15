#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    long long binary;
    cin >> binary;

    int decimal = 0;

    for (int i = 0; binary > 0; i++)
    {
        int lastdigit = binary % 10;
        decimal = decimal + lastdigit * pow(2, i);
        binary = binary / 10;
    }
    cout << decimal << endl;
    return 0;
}
