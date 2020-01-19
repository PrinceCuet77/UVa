#include<bits/stdc++.h>
using namespace std;

typedef pair < int, int > ii;

class UnionFind{
private:
    vector < int > p, rank;
    int numSet;
public:
    UnionFind(int N) {
        p.assign(N+1, 0);
        rank.assign(N+1, 0);
        for (int i = 1; i <= N; i++)
            p[i] = i;
        numSet = N+1;
    }
    int findSet(int i) {
        return (p[i] == i) ? i : (p[i] = findSet(p[i]));
    }
    bool isSameSet(int i, int j) {
        return findSet(i) == findSet(j);
    }
    void unionSet(int i, int j) {
        if (!isSameSet(i, j)) {
            numSet--;
            int x = findSet(i), y = findSet(j);
            if (rank[x] > rank[y])
                p[y] = x;
            else {
                p[x] = y;
                if (rank[x] == rank[y])
                    rank[y]++;
            }
        }
    }
    int numOfDisjointSet() {
        return numSet;
    }
};

int partX(int x1, int x2) {
    return (x1 - x2) * (x1 - x2);
}

int partY(int y1, int y2) {
    return (y1 - y2) * (y1 - y2);
}

double dist(int d1, int d2) {
    return sqrt(d1+d2);
}

int main()
{
    int testCase, n, m;
    scanf("%d", &testCase);
    while (testCase--) {
        scanf("%d", &n);
        int x[n+1], y[n+1];
        for (int i = 1; i <= n; i++)
            scanf("%d %d", &x[i], &y[i]);
        UnionFind UF(n);
        scanf("%d", &m);
        int t = 0;
        for (int i = 0; i < m; i++) {
            int first, second;
            scanf("%d %d", &first, &second);
            if (!UF.isSameSet(first, second)) {
                UF.unionSet(first, second);
                t++;
            }
        }
        if (t == n-1) {
            printf("No new highways need\n");
            if (testCase)
                printf("\n");
            continue;
        }
        vector < pair < double, ii > > EdgeList;
        int counter = 0;
        for (int i = 1; i <= n; i++) {
            for (int j = i+1; j <= n; j++) {
                int d1 = partX(x[i], x[j]);
                int d2 = partY(y[i], y[j]);
                double w = dist(d1, d2);
                EdgeList.push_back(make_pair(w, ii(i, j)));
                counter++;
            }
        }
        sort(EdgeList.begin(), EdgeList.end());
        for (int i = 0; i < counter && t < n-1; i++) {
            pair < double, ii > front = EdgeList[i];
            if (!UF.isSameSet(front.second.first, front.second.second)) {
                printf("%d %d\n", front.second.first, front.second.second);
                UF.unionSet(front.second.first, front.second.second);
                t++;
            }
        }
        if (testCase)
            printf("\n");
    }

    return 0;
}

