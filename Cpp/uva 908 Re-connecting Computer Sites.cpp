#include<bits/stdc++.h>
using namespace std;

typedef pair < int, int > ii;
typedef vector < int > vi;
typedef vector < ii > vii;

class UnionFind {
private:
    vi p, rank;
    int numSet;
public:
    UnionFind(int N) {
        p.assign(N, 0);
        rank.assign(N, 0);
        for (int i = 0; i < N; i++)
            p[i] = i;
        numSet = N;
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

int main()
{
    int k, m, n, u, v, w;;
    bool flag = false;
    while (scanf("%d", &n) == 1) {
        vector < pair < int, ii > > EdgeList;
        int total = 0;
        for(int i = 0; i < n-1; i++) {
            scanf("%d %d %d", &u, &v, &w);
            total += w;
        }
        if (flag)
            printf("\n");
        flag = true;
        scanf("%d", &k);
        for (int i = 0; i < k; i++) {
            scanf("%d %d %d", &u, &v, &w);
            EdgeList.push_back(make_pair(w, ii(u, v)));
        }
        scanf("%d", &m);
        for (int i = 0; i < m; i++) {
            int u, v, w;
            scanf("%d %d %d", &u, &v, &w);
            EdgeList.push_back(make_pair(w, ii(u, v)));
        }
        sort(EdgeList.begin(), EdgeList.end());
        int mst = 0;
        UnionFind UF(n+1);
        int t = EdgeList.size();
        for (int i = 0; i < t; i++) {
            pair < int, ii > front = EdgeList[i];
            if (!UF.isSameSet(front.second.first, front.second.second)) {
                mst += front.first;
                UF.unionSet(front.second.first, front.second.second);
            }
        }
        printf("%d\n%d\n", total, mst);
    }

    return 0;
}
