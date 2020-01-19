#include<bits/stdc++.h>
#include <map>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    char ch[40];
    int test;
    cin >> test;
    getchar();
    getchar();
    while(test--){
        map< string, int > m;
        vector < string > str;
        int total = 0;
        while(gets(ch) && ch[0]){
            string in(ch);
            if(!m[in]){
                m[in]=1;
                str.push_back(in);
            }
            else
                m[in]++;
            total++;
        }
        sort(str.begin(), str.end());
        for(int i = 0 ; i < (str.size()); i++){
            cout << str[i] <<" ";
            printf("%.4lf\n", m[str[i]]*100.00/total);
        }
        if(test)
            putchar('\n');
    }
}
