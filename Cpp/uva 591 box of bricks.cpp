#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[55],n,Case=0,total;

    while(scanf("%d",&n),n){
        total=0;
        for(int i=0;i<n;i++){
            scanf("%d",&arr[i]);
            total+=arr[i];
        }
        int avg=total/n;
        int cnt=0;
        for(int i=0;i<n;i++){
            if(arr[i]>avg)
                cnt+=(arr[i]-avg);
        }
        printf("Set #%d\n",++Case);
        printf("The minimum number of moves is %d.\n\n",cnt);
    }

    return 0;
}

