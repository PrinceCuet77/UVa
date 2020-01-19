#include<iostream>
#include<bits/stdc++.h>
#include<string.h>
using namespace std;

int main()
{
    char ch[1000001];
    int i,len,c;

    while(gets(ch)){
        c=0;
        len=strlen(ch);
        for(i=0;i<len;i++){
            if((ch[i]>='A' && ch[i]<='Z') || (ch[i]>='a' && ch[i]<='z'))
                continue;
            else{
                if((ch[i-1]>='A' && ch[i-1]<='Z') || (ch[i-1]>='a' && ch[i-1]<='z'))
                    c++;
            }
        }
        printf("%d\n",c);
    }

    return 0;
}
