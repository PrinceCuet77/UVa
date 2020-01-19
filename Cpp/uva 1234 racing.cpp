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
    int numOfDisjiontSet() {
        return numSet;
    }
};

int main()
{
    int testCase, node, edge;
    scanf("%d", &testCase);
    while (testCase--) {
        vector < pair < int, ii > > EdgeList;
        scanf("%d %d", &node, &edge);
        for (int i = 0; i < edge; i++) {
            int u, v, w;
            scanf("%d %d %d", &u, &v, &w);
            EdgeList.push_back(make_pair(-w, ii(u, v)));
        }
        sort(EdgeList.begin(), EdgeList.end());
        int mst = 0;
        UnionFind UF(node+1);
        for (int i = 0; i < edge; i++) {
            pair < int, ii > front = EdgeList[i];
            if (!UF.isSameSet(front.second.first, front.second.second))
                UF.unionSet(front.second.first, front.second.second);
            else
                mst += (-front.first);
        }
        printf("%d\n", mst);
    }

    return 0;
}

