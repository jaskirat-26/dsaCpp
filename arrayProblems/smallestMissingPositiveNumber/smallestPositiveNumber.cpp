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
        for (int j = 0; j < n; j++)
        {
            cin >> arr[j];
        }

        int N = 1e6 ;
        bool check[N];
        for (int j=0;j<N;j++){
            check[j] = false;
        }

        for (int j=0;j<n;j++){
            if(arr[j]>0){
                check[arr[j]] = true;
            }
        }

        int ans;
        for(int j=1;j<N;j++){
            if(!check[j]){
                ans = j;
                break;
            }
        }

        cout<<ans<<endl;
    }

    return 0;
}
