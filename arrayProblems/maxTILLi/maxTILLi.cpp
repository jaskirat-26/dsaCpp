#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int x = n;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int currMax = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (currMax < arr[i])
        {
            currMax = arr[i];
        }
        arr[i] = currMax;
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}
