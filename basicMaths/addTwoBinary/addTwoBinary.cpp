#include <iostream>
using namespace std;

int reverse(int n)
{
    int reverse = 0;

    while (n > 0)
    {
        int lastdigit = n % 10;
        reverse = reverse * 10 + lastdigit;
        n = n / 10;
    }
    return reverse;
}

int addBinary(int a, int b)
{
    int ans = 0;
    int prevCarry = 0;
    while (a > 0 && b > 0)
    {
        if (a % 2 == 0 && b % 2 == 0)
        {
            ans = ans * 10 + prevCarry;
            prevCarry = 0;
        }
        else if (a % 2 == 0 || b % 2 == 0)
        {
            if (prevCarry == 1)
            {
                ans = ans * 10 + 0;
                prevCarry = 1;
            }
            else
            {
                ans = ans * 10 + 1;
                prevCarry = 0;
            }
        }
        else
        {
            ans = ans * 10 + prevCarry;
            prevCarry = 1;
        }
        a /= 10;
        b /= 10;
    }

    while (a > 0)
    {
        if (prevCarry == 1)
        {
            if (a % 2 == 1)
            {
                ans = ans * 10 + 0;
                prevCarry = 1;
            }
            else
            {
                ans = ans * 10 + 1;
                prevCarry = 0;
            }
        }
        else
        {
            ans = ans * 10 + a % 2;
        }
        a /= 10;
    }

    if (prevCarry)
    {
        ans = ans * 10 + 1;
    }
    cout << ans << endl;
    return reverse(ans);
}
int main()
{
    int binary1, binary2;
    cin >> binary1 >> binary2;

    cout << addBinary(max(binary2, binary1), min(binary1, binary2));

    return 0;
}
