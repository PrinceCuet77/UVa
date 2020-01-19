#include<bits/stdc++.h>
using namespace std;

typedef vector < int > vi;
typedef pair < int, int > ii;
typedef vector < ii > vii;

class UnionFind {
private:
    vi p, rank;
    int numSet;
public:
    UnionFind(int N) {
        p.assign(N, 0);
        rank.assign(N, 0);
        numSet = N;
        for (int i = 0; i < N; i++)
            p[i] = i;
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
    int node, edge;
    while (scanf("%d %d", &node, &edge) == 2) {
        if (node == 0 && edge == 0)
            break;
        vector < pair <int, ii > > EdgeList;
        int totalCost = 0;
        for (int i = 0; i < edge; i++) {
            int u, v, w;
            scanf("%d %d %d", &u, &v, &w);
            EdgeList.push_back(make_pair(w, ii(u, v)));
            totalCost += w;
        }
        sort(EdgeList.begin(), EdgeList.end());
        UnionFind UF(node);
        int mstCost = 0;
        for (int i = 0; i < edge && UF.numOfDisjointSet() > 1; i++) {
            pair < int, ii > front = EdgeList[i];
            if (!UF.isSameSet(front.second.first, front.second.second)) {
                mstCost += front.first;
                UF.unionSet(front.second.first, front.second.second);
            }
        }
        printf("%d\n", totalCost-mstCost);
    }

    return 0;
}

