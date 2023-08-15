#include <bits/stdc++.h>
using namespace std;
//https://www.youtube.com/watch?v=eJcBH0xvG98&list=PLfqMhTWNBTe0b2nM6JHVCnAkhQRGiZMSJ&index=23
int main()
{
    int t;
    cin >>t;
    for(int i=0;i<t;i++){
        int n;
        cin >> n;

        int arr[n];
        for (int j=0;j<n;j++){
            cin>>arr[j];
        }

        if (n<2){
            cout <<n<<endl;
            continue;
        }   

        int prevRecord = 0;
        int last;
        int recordBreakers = 0;
        for (int j=0;j<n-1;j++){
            if (arr[j]>prevRecord && (arr[j]>arr[j+1])){
                prevRecord = arr[j];
                recordBreakers++;
            }
        }
        (arr[n-1]>prevRecord)?last = 1: last = 0;
        // cout<<last;
        cout<<recordBreakers+last<<endl;
    }
    return 0;
}
