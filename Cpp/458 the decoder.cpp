#include<iostream>
#include<bits/stdc++.h>
#include<string.h>
using namespace std;

int main()
{
    char ch[1000001];
    int i,len;

    while(gets(ch)){
        len=strlen(ch);
        for(i=0;i<len;i++)
            printf("%c",ch[i]-7);
        printf("\n");
    }

    return 0;
}
