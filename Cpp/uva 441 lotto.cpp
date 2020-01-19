#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, arr[15], cnt = 0;

    while(scanf("%d", &n), n){
        if(cnt++)
            printf("\n");
        for(int i = 0; i < n; i++)
            scanf("%d", &arr[i]);
        for(int i = 0; i < n - 5; i++){
            for(int j = i + 1; j < n - 4; j++){
                for(int a = j + 1; a < n - 3; a++){
                    for(int b = a + 1; b < n - 2; b++){
                        for(int c = b + 1; c < n - 1; c++){
                            for(int d = c + 1; d < n; d++)
                                printf("%d %d %d %d %d %d\n", arr[i], arr[j], arr[a], arr[b], arr[c], arr[d]);
                        }
                    }
                }
            }
        }
    }

    return 0;
}
