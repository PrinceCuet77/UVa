#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
        ll testCase;
        cin >> testCase;
        for ( int i = 0; i < testCase; i++ ) {
                ll n, value;
                cin >> n;
                map < ll, ll > mp;
                ll result = 0, block = 0, cnt = 0;
                for ( int j = 1; j <= n; j++ ) {
                        cin >> value;

                        ll location = mp[value];
                        if ( location ) {
                                block = max(block, location);
                                cnt = j - block - 1;
                        }
                        cnt++;
                        mp[value] = j;
                        result = max(result, cnt);
                }

                cout << result << endl;
        }

        return 0;
}
