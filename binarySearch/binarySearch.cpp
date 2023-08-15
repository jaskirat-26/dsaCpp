#include <iostream>
using namespace std;

int binarySearch(int arr[], int n, int key)
{
    int s = 0;
    int median = n / 2;
    while (s < n)
    {
        if (arr[median] == key)
        {
            return median;
        }
        else if (arr[median] < key)
        {
            s = median;
            median = (s + n) / 2;
        }
        else
        {
            n = median;
            median = (s + n) / 2;
        }
    }
    return -1;
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int x;
    cin >> x;

    cout << binarySearch(arr, n, x) << endl;
    return 0;
}
