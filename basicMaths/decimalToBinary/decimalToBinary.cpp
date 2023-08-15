#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int decimal;
    cin >> decimal;

    int binary = 0;
    int x = 0;
    while (decimal > 0)
    {
        int rem = decimal % 2;
        binary = binary + rem * pow(10, x);
        decimal = decimal / 2;
        x++;
    }
    cout << binary << endl;
    return 0;
}
