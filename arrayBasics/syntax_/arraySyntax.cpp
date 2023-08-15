#include <iostream>
using namespace std;

// array are of similar types

int main()
{
    // basic declaration
    int arr[4] = {10, 20, 30, 40};
    cout << arr[3] << endl;

    int n;
    cin >> n;
    int array[n];
    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }
    for (int i = 0; i < n; i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;
}