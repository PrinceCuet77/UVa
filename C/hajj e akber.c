#include<stdio.h>
#include<string.h>

int main()
{
    char n[10];
    int a=1;

    while(scanf("%s",n)==1){
        if(!strcmp(n,"*"))
            return 0;
        else if(!strcmp(n,"Hajj"))
            printf("case %d: Hajj-e-Akbar\n",a);
        else if(!strcmp(n,"Umrah"))
            printf("case %d: Hajj-e-Asghar\n",a);
        a++;
    }

    return 0;
}
