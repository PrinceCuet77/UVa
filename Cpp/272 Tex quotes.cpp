#include<iostream>
#include<cstdio>
#include<string.h>
using namespace std;

int main()
{
    char ch[10000];
    long len,i;
    int flag=0;

    while(gets(ch)){
        len=strlen(ch);
        for(i=0;i<len;i++){
            if(ch[i]=='"'){
                if(flag==0){
                    printf("``");
                    flag=1;
                }
                else if(flag==1){
                    printf("''");
                    flag=0;
                }
            }
            else
                printf("%c",ch[i]);
        }
        printf("\n");
    }

    return 0;
}
