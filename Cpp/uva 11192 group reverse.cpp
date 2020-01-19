#include<bits/stdc++.h>
#include<string.h>
using namespace std;

int main()
{
    int n, len;
    char ch[105];
    string s;
    while(scanf("%d", &n), n){
        scanf("%s", ch);
        len = strlen(ch);
        int t = 0;
        int r = len / n;
        s = "";
        for(int i = 0; i <= len; i++){
            if(t == r){
                reverse(s.begin(), s.end());
                cout << s;
                s.clear();
                t = 0;
                s +=  ch[i];
                t++;
            }
            else {
                t++;
                s += ch[i];
            }
        }
        cout << endl;
    }

    return 0;
}
