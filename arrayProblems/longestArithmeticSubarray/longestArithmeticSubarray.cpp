#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        if (n < 3)
        {
            cout << n << endl;
            continue;
        }

        int prevDiff = arr[1]-arr[0];
        int currArrLen = 2;
        int maxArrLen = 2;

        for (int j = 1; j < n - 1; j++)
        {
            int currDiff = arr[j + 1] - arr[j];
            if (currDiff == prevDiff)
            {
                currArrLen++;
                if(currArrLen>maxArrLen){
                    maxArrLen = currArrLen;
                }    
            }
            else
            {
                prevDiff = currDiff;    
                currArrLen = 2;
            }
        }
        cout<< maxArrLen<<endl;
    }

    return 0;
}
