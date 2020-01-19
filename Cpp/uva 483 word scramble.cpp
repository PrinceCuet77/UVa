#include<bits/stdc++.h>
#include<cstring>
using namespace std;

int main()
{
    char ch[1000001];
    int i,len,start,stop,j;

    while(gets(ch)){
        len=strlen(ch);
        stop=0;
        for(i=0;i<len;i++){
            if(ch[i]==' ' || i==len-1){
                if(i==len-1)
                    start=i+1;
                else
                    start=i;
                for(j=start-1;j>=stop;j--)
                    printf("%c",ch[j]);
                if(i==len-1){
                    printf("\n");
                    break;
                }
                else
                    printf(" ");
                stop=i+1;
            }
        }
    }

    return 0;
}
