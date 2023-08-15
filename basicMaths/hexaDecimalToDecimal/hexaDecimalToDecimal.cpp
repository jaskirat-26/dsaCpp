#include <iostream>
#include <math.h>
#include <map>
#include <string>
using namespace std;

int main()
{
    map<char, int> mp;
    mp['1'] = 1;
    mp['2'] = 2;
    mp['3'] = 3;
    mp['4'] = 4;
    mp['5'] = 5;
    mp['6'] = 6;
    mp['7'] = 7;
    mp['8'] = 8;
    mp['9'] = 9;
    mp['A'] = 10;
    mp['A'] = 10;
    mp['B'] = 11;
    mp['C'] = 12;
    mp['D'] = 13;
    mp['E'] = 14;
    mp['F'] = 15;

    string hexadecimal;
    cin >> hexadecimal;

    int decimal = 0;

    for (int i = 0; i < hexadecimal.length(); i++)
    {
        int lastdigit = mp[hexadecimal[hexadecimal.length() - i - 1]];
        decimal = decimal + lastdigit * pow(16, i);
    }
    cout << decimal << endl;
    return 0;
}
