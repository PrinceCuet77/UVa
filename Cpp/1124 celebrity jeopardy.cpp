#include<iostream>
#include<cstdio>
#include<string.h>
using namespace std;

int main()
{
    char ch[1000];
    long len,i;

    while(gets(ch)){
        len=strlen(ch);
        for(i=0;i<len;i++)
            printf("%c",ch[i]);
        printf("\n");
    }

    return 0;
}
