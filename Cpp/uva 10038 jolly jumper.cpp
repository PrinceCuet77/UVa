#include<bits/stdc++.h>
#include<cmath>
#include<algorithm>
using namespace std;

int main()
{
    int arr[3005], Dif[3005], i, n, flag;

    while(scanf("%d", &n) == 1){
        flag = 0;
        for(i = 0; i < n; i++)
            scanf("%d", &arr[i]);

        for(i = 0; i < n - 1; i++)
            Dif[i] = abs(arr[i+1] - arr[i]);

        sort(Dif, Dif + n - 1);
        for(i = 0; i < n - 1; i++){
            if(Dif[i] != i + 1)
                break;
            flag++;
        }
        if(flag == (n - 1))
            printf("Jolly\n");
        else
            printf("Not jolly\n");
    }

    return 0;
}
