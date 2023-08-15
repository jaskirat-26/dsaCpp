#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    long long octal;
    cin >> octal;

    int decimal = 0;

    for (int i = 0; octal > 0; i++)
    {
        int lastdigit = octal % 10;
        decimal = decimal + lastdigit * pow(8, i);
        octal = octal / 10;
    }
    cout << decimal << endl;
    return 0;
}
