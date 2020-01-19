#include<iostream>
#include<stdio.h>
#include<cstring>
#include<algorithm>
#include<ctype.h>
using namespace std;

int cnt[26];
int main()
{
    char ch[100],s[26]={'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
    int test,j,k,i,Max;

    scanf("%d\n",&test);
    while(test--){
        gets(ch);
        int len=strlen(ch);
        for(i=0; i<len; i++){
            if(!isalpha(ch[i]))
                continue;
            else{
                if(islower(ch[i])){
                    k=(int)ch[i]-'a'+1;
                    cnt[k-1]++;
                }
                else if(isupper(ch[i])){
                    k=(int)ch[i]-'A'+1;
                    cnt[k-1]++;
                }
            }
        }
    }
    Max=0;
    for(i=0; i<26; i++){
        if(cnt[i]>Max)
            Max=cnt[i];
    }
    for(i=Max; i>0; i--){
        for(j=0; j<26; j++){
            if(cnt[j]==i)
                printf("%c %d\n",s[j],i);
        }
    }

    return 0;
}
