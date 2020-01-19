#include<bits/stdc++.h>
using namespace std;

int n = 5;
int dp[6][7500];
int coin[] = {1, 5, 10, 25, 50};

int solve(int i, int w) {
        if (i == n) {
                if (w == 0)
                        return 1;
                else
                        return 0;
        }
        if (dp[i][w] != -1)
                return dp[i][w];
        int profit1 = 0, profit2 = 0;
        if (w-coin[i] >= 0)
                profit1 = solve(i, w-coin[i]);
        profit2 = solve(i+1, w);
        return dp[i][w] = (profit1+profit2);
}

void solution() {
        int value;
        memset(dp, -1, sizeof(dp));
        while (scanf("%d", &value) == 1)
                printf("%d\n", solve(0, value));
}

int main()
{
        solution();

        return 0;
}
