#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main()
{
    int i,j,Max,len,k;
    char ch1,ch[100],s[52]={'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z','a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};

    while(gets(ch)){
        int cnt[52];
        for(i=0; i<52; i++)
            cnt[i]=0;
        len=strlen(ch);
        for(i=0; i<len; i++){
            if(isalpha(ch[i])){
                if(isupper(ch[i])){
                    k=(int)ch[i]-'A'+1;
                    cnt[k-1]++;
                }
                else if(islower(ch[i])){
                    k=(int)ch[i]-'a'+1;
                    k+=25;
                    cnt[k]++;
                }
            }
        }
        Max=0;
        for(i=0; i<52; i++){
            if(cnt[i]>Max)
                Max=cnt[i];
        }
        for(i=0; i<52; i++){
            if(cnt[i]==Max){
                printf("%c",s[i]);
            }
        }
        printf(" %d\n",Max);
    }

    return 0;
}

