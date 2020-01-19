#include<bits/stdc++.h>
#include<cstring>
#include<algorithm>
using namespace std;

int main()
{
    int len;
    char ch[80];

    while(scanf("%s",ch)==1){
        if(ch[0]=='#')
            break;
        len=strlen(ch);
        if(next_permutation(ch,ch+len))
            printf("%s\n",ch);
        else
            printf("No Successor\n");
    }

    return 0;
}
