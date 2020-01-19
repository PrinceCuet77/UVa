#include<bits/stdc++.h>
#include<map>
using namespace std;

int main()
{
    map < string, string > mp;
    string str, ch;
    getline(cin, str);
    while(str != ""){
        ///stringstream ss(str);
        ///ss >> str >> ch;
        getline(cin, ch);
        mp[ch] = str;
        getline(cin, str);
    }
    string t;
    while(cin >> t){
        map < string, string > ::iterator it = mp.find(t);
        if(it == mp.end())
            printf("eh\n");
        else
            cout << it->second << endl;
    }

    return 0;
}
