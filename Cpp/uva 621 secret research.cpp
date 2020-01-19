#include<iostream>
#include<cstring>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int len,test;
    char ch[10001];

    scanf("%d",&test);
    while(test--){
        scanf("%s",ch);
        len=strlen(ch);
        if(len<=2)
            printf("+\n");
        else{
            if(ch[len-2]=='3' && ch[len-1]=='5')
                printf("-\n");
            else if(ch[0]=='9' && ch[len-1]=='4')
                printf("*\n");
            else if(ch[0]=='1' && ch[1]=='9' && ch[2]=='0')
                printf("?\n");
        }
    }

    return 0;
}
