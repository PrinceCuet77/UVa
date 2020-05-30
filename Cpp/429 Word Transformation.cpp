#include <bits/stdc++.h>
using namespace std; 

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
                string ch; 
                vector < string > word; 
                while ( cin >> ch ) {
                        if ( ch[0] == '*' ) 
                                break; 
                        word.push_back(ch); 
                }

                cin.ignore();

                while ( getline(cin, ch) && ch != "" ) {
                        stringstream ss(ch); 
                        string s, d; 
                        ss >> s >> d;

                        map < string, int > visited;

                        queue < string > q;
                        q.push(s);

                        visited[s] = 0;

                        while ( !q.empty() && visited.count(d) == 0 ) {
                                string u = q.front(); 
                                q.pop(); 

                                for ( auto v : word ) {
                                        if ( u.size() == v.size() && visited.count(v) == 0 ) {
                                                int diff = 0; 
                                                for ( int i = 0; i < v.size(); i++ ) {
                                                        if ( v[i] != u[i] ) 
                                                                diff++;
                                                }

                                                if ( diff == 1 ) {
                                                        visited[v] = visited[u] + 1;
                                                        q.push(v);
                                                }
                                        }
                                }
                        } 
                        
                        cout << s << " " << d << " " << visited[d] << "\n";
                }

                if ( tc ) 
                        cout << "\n"; 
        }

        return 0; 
}
