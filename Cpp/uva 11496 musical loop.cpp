#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[10005], n, flagup, flagdown;

    while(scanf("%d", &n), n){
        int cnt = 0;
        for(int i = 0; i < n; i++)
            scanf("%d", &arr[i]);
        flagup = flagdown = 0;
        if(arr[0] > arr[n-1])
            flagup = 1;
        else
            flagdown = 1;
        arr[n] = arr[0];
        for(int i = 1; i <= n; i++){
            if(arr[i-1] > arr[i] && flagup){
                cnt++;
                flagup = 0;
                flagdown = 1;
            }
            else if(arr[i-1] < arr[i] && flagdown){
                cnt++;
                flagup = 1;
                flagdown = 0;
            }
        }
        printf("%d\n", cnt);
    }
}
