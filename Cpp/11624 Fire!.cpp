#include <bits/stdc++.h>
using namespace std; 

#define sz  1005

int r, c; 
char grid[sz][sz]; 

int dx[] = {1, 0, -1, 0}; 
int dy[] = {0, 1, 0, -1};

bool valid(int x, int y) {
        if ( x >= 0 && x < r && y >= 0 && y < c ) return true;
        else return false;
}

int bfs(queue < pair < int, int > >& fire, queue < pair < int, int > >& him) {
        int cnt = 1; 

        while ( !him.empty() ) {
                queue < pair < int, int > > tmp; 
                while ( !fire.empty() ) {
                        pair < int, int > u = fire.front(); 
                        fire.pop(); 

                        for ( int i = 0; i < 4; i++ ) {
                                int x = u.first + dx[i]; 
                                int y = u.second + dy[i]; 

                                if ( valid(x, y) && grid[x][y] == '.' ) {
                                        grid[x][y] = 'F';
                                        tmp.push({x, y}); 
                                }
                        }
                }

                fire.swap(tmp);

                while ( !him.empty() ) {
                        pair < int, int > u = him.front(); 
                        him.pop(); 

                        for ( int i = 0; i < 4; i++ ) {
                                int x = u.first + dx[i]; 
                                int y = u.second + dy[i]; 

                                if ( valid(x, y) == false ) 
                                        return cnt;

                                if ( grid[x][y] == '.' ) {
                                        grid[x][y] = 'J'; 
                                        tmp.push({x, y}); 
                                }
                        }
                }

                him.swap(tmp); 
                cnt++;
        }

        return -1;
}

int main()
{
        ios_base :: sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0); 

        // #ifndef Prince77
        //         freopen("Inputs/input.txt", "r", stdin); 
        //         freopen("Inputs/output2.txt", "w", stdout); 
        // #endif

        int tc; 
        cin >> tc; 
        while ( tc-- ) {
                cin >> r >> c; 
                
                queue < pair < int, int > > fire, him; 
                for ( int i = 0; i < r; i++ ) { 
                        for ( int j = 0; j < c; j++ ) {
                                cin >> grid[i][j];

                                if ( grid[i][j] == 'J' ) him.push({i, j}); 
                                if ( grid[i][j] == 'F' ) fire.push({i, j});
                        }
                }

                int ans = bfs(fire, him); 
                
                if ( ans == -1 ) cout << "IMPOSSIBLE\n"; 
                else cout << ans << "\n";
        }   

        return 0; 
}
