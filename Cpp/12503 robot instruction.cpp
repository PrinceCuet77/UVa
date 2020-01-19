#include<iostream>
#include<string.h>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    char word[20],temp;
    int test,n,i,pos,t,b[110];

    cin>>test;
    while(test--){
        cin>>n;
        pos=0;
        for(i=1;i<=n;i++){
            scanf("%s",word);
            if(!strcmp(word,"LEFT")){
                pos-=1;
                b[i]=-1;
            }
            else if(!strcmp(word,"RIGHT")){
                pos+=1;
                b[i]=1;
            }
            else{
                scanf("%s %d",word,&t);
                pos+=b[t];
                b[i]=b[t];
            }
        }
        printf("%d\n",pos);
    }

    return 0;
}
