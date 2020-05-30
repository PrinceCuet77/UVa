#include <bits/stdc++.h>
using namespace std; 

typedef long long ll; 

int main()
{
        ios_base :: sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0); 

        // #ifndef Prince77
        //         freopen("Inputs/input.txt", "r", stdin); 
        //         freopen("Inputs/output.txt", "w", stdout); 
        // #endif

        ll bin1[3], bin2[3], bin3[3]; 
        while ( cin >> bin1[0] >> bin1[1] >> bin1[2] >> bin2[0] >> bin2[1] >> bin2[2] >> bin3[0] >> bin3[1] >> bin3[2] ) {
                string res = "BCG";
                ll ans = bin2[0] + bin3[0] + bin1[2] + bin3[2] + bin1[1] + bin2[1];

                ll t = bin2[0] + bin3[0] + bin1[1] + bin3[1] + bin1[2] + bin2[2];
                if ( t < ans ) {
                        res = "BGC";
                        ans = t; 
                }

                t = bin2[2] + bin3[2] + bin1[0] + bin3[0] + bin1[1] + bin2[1];
                if ( t < ans ) {
                        res = "CBG";
                        ans = t; 
                }

                t = bin2[2] + bin3[2] + bin1[1] + bin3[1] + bin1[0] + bin2[0];
                if ( t < ans ) {
                        res = "CGB";
                        ans = t; 
                }

                t = bin2[1] + bin3[1] + bin1[0] + bin3[0] + bin1[2] + bin2[2];
                if ( t < ans ) {
                        res = "GBC";
                        ans = t; 
                }

                t = bin2[1] + bin3[1] + bin1[2] + bin3[2] + bin1[0] + bin2[0];
                if ( t < ans ) {
                        res = "GCB";
                        ans = t; 
                }

                cout << res << " " << ans << "\n"; 
        }

        return 0; 
}
