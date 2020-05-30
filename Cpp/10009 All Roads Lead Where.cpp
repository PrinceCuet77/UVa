#include <bits/stdc++.h>
using namespace std; 

#define inf 1000000000
#define sz 30

vector < int > a[sz], dist(sz), p(sz); 

void bfs(int s) {
        queue < int > q; 
        q.push(s); 

        dist[s] = 0; 
        p[s] = -1; 

        while ( !q.empty() ) {
                int u = q.front(); 
                q.pop(); 

                for ( auto v : a[u] ) {
                        if ( dist[v] == inf ) {
                                dist[v] = dist[u] + 1; 
                                p[v] = u;
                                q.push(v); 
                        }
                }
        }
}

void printPath(int s) {
        if ( dist[s] == 0 ) 
                return; 

        vector < int > path; 
        for ( int v = s; v != -1; v = p[v] ) 
                path.push_back(v); 

        reverse(path.begin(), path.end()); 

        for ( auto u : path ) 
                cout << (char)(u + 'A');
        cout << "\n";
}

int main()
{
        ios_base :: sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0); 

        // #ifndef Prince77
        //         freopen("Inputs/input.txt", "r", stdin); 
        //         freopen("Inputs/output.txt", "w", stdout); 
        // #endif

        int tc; 
        cin >> tc; 
        while ( tc-- ) {
                int e, q;
                cin >> e >> q;

                for ( int i = 0; i < 30; i++ ) 
                        a[i].clear(); 

                for ( int i = 0; i < e; i++ ) {
                        string ch1, ch2; 
                        cin >> ch1 >> ch2; 

                        int u = ch1[0] - 'A'; 
                        int v = ch2[0] - 'A'; 

                        a[u].push_back(v); 
                        a[v].push_back(u); 
                }

                for ( int i = 0; i < q; i++ ) {
                        string ch1, ch2; 
                        cin >> ch1 >> ch2; 

                        int s = ch1[0] - 'A'; 
                        int d = ch2[0] - 'A'; 

                        for ( int i = 0; i < 30; i++ ) {
                                dist[i] = inf; 
                                p[i] = -1; 
                        }

                        bfs(s);

                        printPath(d);
                }

                if ( tc ) 
                        cout << "\n"; 
        }

        return 0; 
}
