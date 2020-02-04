#include <bits/stdc++.h>
using namespace std;


int main()
{
        int n;
        while ( cin >> n, n ) {
                string course[10];
                map < string, int > mp;
                int thresold = -1;
                for ( int i = 0; i < n; i++ ) {
                        for ( int j = 0; j < 5; j++ ) {
                                cin >> course[j];
                        }

                        sort(course, course+5);

                        string courseCode = "";
                        for ( int j = 0; j < 5; j++ )
                                courseCode += course[j];

                        mp[courseCode]++;
                        if ( mp[courseCode] > thresold )
                                thresold = mp[courseCode];
                }

                int cnt = 0;
                for ( auto x : mp ) {
                        if ( x.second == thresold )
                                cnt += x.second;
                }

                cout << cnt << endl;
        }

        return 0;
}
