#include<bits/stdc++.h>
using namespace std;

class UnionFind {
private:
    vector < int > p, rank;
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

double partX(double x1, double x2) {
    return (x1 - x2) * (x1 - x2);
}

double partY(double y1, double y2) {
    return (y1 - y2) * (y1 - y2);
}

double dist(double d1, double d2) {
    return sqrt(d1+d2);
}

int main()
{
    int testCase, n;
    scanf("%d", &testCase);
    while(testCase--) {
        scanf("%d", &n);
        double x[n+1], y[n+1];
        for (int i = 0; i < n; i++)
            scanf("%lf %lf", &x[i], &y[i]);
        vector < pair < double, pair < int, int > > > EdgeList;
        int counter = 0;
        for (int i = 0; i < n; i++) {
            for (int j = i+1; j < n; j++) {
                double d1 = partX(x[i], x[j]);
                double d2 = partY(y[i], y[j]);
                double w = dist(d1, d2);
                EdgeList.push_back(make_pair(w, pair < int, int > (i, j)));
                counter++;
            }
        }
        sort(EdgeList.begin(), EdgeList.end());
        double mst = 0.0;
        UnionFind UF(n);
        for (int i = 0; i < counter && UF.numOfDisjointSet() > 1; i++) {
            pair < double, pair < int, int > > front = EdgeList[i];
            if (!UF.isSameSet(front.second.first, front.second.second)) {
                mst += front.first;
                UF.unionSet(front.second.first, front.second.second);
            }
        }
        printf("%.2lf\n", mst);
        if (testCase)
            printf("\n");
    }

    return 0;
}
