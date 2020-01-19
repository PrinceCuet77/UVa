#include<bits/stdc++.h>
#include<cstring>
using namespace std;

int main()
{
    int len,ck,flag;
    char ch[100];

    while(gets(ch)){
        if(!strcmp(ch,"DONE"))
            return 0;
        len=strlen(ch);
        ck=len-1;
        flag=0;
        for(int i=0;i<len;i++){
            while(1){
                if(ch[i]==' ' || ch[i]=='!' || ch[i]==',' || ch[i]=='.')
                    i++;
                else
                    break;
            }
            while(1){
                if(ch[ck]==' ' || ch[ck]=='!' || ch[ck]==',' || ch[ck]=='.')
                    ck--;
                else
                    break;
            }
            if(ch[i]==ch[ck])
                continue;
            else{
                flag=1;
                break;
            }
        }
        if(flag)
            printf("Uh oh..\n");
        else
            printf("You won't be eaten!\n");
    }

    return 0;
}
