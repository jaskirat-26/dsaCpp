#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        int minTemp = arr[i];
        int minTempIndex = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < minTemp)
            {
                minTemp = arr[j];
                minTempIndex = j;
            }
        }
        int temp = arr[i];
        arr[i] = arr[minTempIndex];
        arr[minTempIndex] = temp;
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}
