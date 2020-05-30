#include <bits/stdc++.h>
using namespace std; 

#define inf 1000000000
#define sz 1005

vector < int > a[sz], dist(sz); 

void bfs(int s) {
        queue < int > q; 
        q.push(s); 

        dist[s] = 0; 

        while ( !q.empty() ) {
                int u = q.front(); 
                q.pop(); 

                for ( auto v : a[u] ) {
                        if ( dist[v] == inf ) {
                                dist[v] = dist[u] + 1; 
                                q.push(v); 
                        }
                }
        }
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
                int n, e;
                cin >> n >> e; 

                for ( int i = 0; i <= n; i++ ) {
                        a[i].clear(); 
                        dist[i] = inf;
                }

                for ( int i = 0; i < e; i++ ) {
                        int u, v; 
                        cin >> u >> v; 
                        a[u].push_back(v); 
                        a[v].push_back(u); 
                }

                bfs(0); 

                for ( int i = 1; i < n; i++ ) 
                        cout << dist[i] << "\n";

                if ( tc ) 
                        cout << "\n"; 
        }

        return 0; 
}
