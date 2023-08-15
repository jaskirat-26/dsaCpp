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
        int target;
        cin>>target;

        if (n==1){
            cout<<1<<endl;
            continue;
        }

        int start = 0;
        int end = 1;
        int sum = arr[start] + arr[end];
        while(start<end){
            if(end>=n){
                cout<< -1<<endl;
                break;
            }else if(sum<target){
                end++;
                sum = sum + arr[end];
            }else if(sum>target){
                sum = sum - arr[start];
                start++;
            }else{
                cout<< start <<" "<<end<<endl;
                break;
            }
        }
    }

    return 0;
}
