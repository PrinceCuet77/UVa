#include<bits/stdc++.h>
using namespace std;

int value, n = 21, coin[22];
long long int dp[22][10001];

void setCoinValue() {
        for (int i = 1; i <= 21; i++)
                coin[i-1] = i*i*i;
}

long long int solution(int i, int w) {
        if (i == n) {
                if (w == 0)
                        return 1;
                else
                        return 0;
        }
        if (w < 0) return 0;
        if (dp[i][w] != -1)
                return dp[i][w];
        return dp[i][w] = solution(i, w-coin[i]) + solution(i+1, w);
}

void solve() {
        setCoinValue();
        memset(dp, -1, sizeof(dp));
        while (scanf("%d", &value) == 1)
                printf("%lld\n", solution(0, value));
}

int main()
{
        solve();

        return 0;
}
