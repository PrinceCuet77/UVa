#include<stdio.h>
#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;

int main()
{
    char ch,ch1;

    while(ch=getchar()){
        if(ch==EOF)
            return 0;
        if(ch=='A' || ch=='a' || ch=='E' || ch=='e' || ch=='I' || ch=='i' || ch=='O' || ch=='o' || ch=='U' || ch=='u'){
            while(isalpha(ch)){
                printf("%c",ch);
                ch=getchar();
            }
            printf("ay");
        }
        else if(isalpha(ch)){
            ch1=ch;
            ch=getchar();
            while(isalpha(ch)){
                printf("%c",ch);
                ch=getchar();
            }
            printf("%cay",ch1);
        }
        printf("%c",ch);
    }

    return 0;
}
