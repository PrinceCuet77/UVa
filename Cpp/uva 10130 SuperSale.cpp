#include<bits/stdc++.h>
using namespace std;

#define max_item 1001

int cost[max_item], weight[max_item], dp[max_item][101], n, totalWeight;

int knapsack(int i, int w) {
    if(i == n)
        return 0;
    if (dp[i][w] != -1)
        return dp[i][w];
    int profit1 = 0, profit2 = 0;
    if (w+weight[i] <= totalWeight)
        profit1 = cost[i] + knapsack(i+1, w+weight[i]);
    profit2 = knapsack(i+1, w);
    dp[i][w] = max(profit1, profit2);
    return dp[i][w];
}

int main()
{
    int testCase, person;
    scanf("%d", &testCase);
    while (testCase--) {
        scanf("%d", &n);
        for (int i = 0; i < n; i++)
            scanf("%d %d", &cost[i], &weight[i]);
        scanf("%d", &person);
        int total = 0;
        for (int i = 0; i < person; i++) {
            scanf("%d", &totalWeight);
            memset(dp, -1, sizeof(dp));
            total += knapsack(0, 0);
        }
        printf("%d\n", total);
    }

    return 0;
}

