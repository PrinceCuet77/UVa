#include<bits/stdc++.h>
#include<vector>
#include<map>
using namespace std;

vector < int > vp;
map < int, int> mp;

int main()
{
    int n;
    while(scanf("%d", &n) != EOF){
        if(mp.count(n) == 0){
            mp[n] = 1;
            vp.push_back(n);
        }
        else
            mp[n] = mp[n] + 1;
    }
    for(int i = 0; i < vp.size(); i++)
        printf("%d %d\n", vp.at(i), mp[vp[i]]);

    return 0;
}
