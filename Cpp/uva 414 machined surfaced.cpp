#include<bits/stdc++.h>
#include<string.h>
using namespace std;

int main()
{
    int n, line, total, minline, linespace;
    string ch;

    while(cin >> n, n){
        cin.ignore();
        total = 0;
        minline = 30;
        for(int i = 0; i < n; i++){
            getline(cin, ch);
            int len = ch.length();
            line = 0;
            for(string::const_iterator iter = ch.begin(); iter != ch.end(); ++iter){
                if(*iter != 'X')
                    line++;
            }
            total += line;
            if(i == 0)
                minline = line;
            else{
                if(minline > line)
                    minline = line;
            }
        }
        printf("%d\n",total - (minline * n));
    }

    return 0;
}
