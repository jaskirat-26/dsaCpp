#include <iostream>
#include <limits.h>
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
        for (int j = 0; j < n; j++)
        {
            cin >> arr[j];
        }

        const int N = 1e6+2;
        int idx[N];
        for (int j=0;j<N;j++){
            idx[j]=-1;
        }

        int minIdx = INT_MAX;
        for (int j=0;j<n; j++){
            if (idx[arr[j]]>=0){
                if (idx[arr[j]]<minIdx){
                    minIdx = idx[arr[j]];
                }
            }else {
                idx[arr[j]] = j;
            }
        }

        cout<< minIdx<<endl;
    }

    return 0;
}
