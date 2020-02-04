#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
        ll m, n;
        while ( cin >> m >> n ) {
                map < string, ll > mp;
                string word;
                ll value;
                for ( int i = 0; i < m; i++ ) {
                        cin >> word >> value;
                        mp[word] = value;
                }

                for ( int i = 0; i < n; i++ ) {
                        ll total = 0;
                        while ( cin >> word && word != "." )
                                total += mp[word];

                        cout << total << endl;
                }
        }

        return 0;
}
