#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;

int main()
{
    char st[100];
    int t=1;

    while(scanf("%s",st)==1){
        if(st[0]=='*')
            break;
        else if(!strcmp(st,"Hajj"))
            printf("Case %d: Hajj-e-Akbar\n",t);
        else if(!strcmp(st,"Umrah"))
            printf("Case %d: Hajj-e-Asghar\n",t);
        t++;
    }

    return 0;
}
