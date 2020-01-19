#include<iostream>
#include<stdio.h>
#include<cstring>
using namespace std;

int main()
{
    char ch[85], s[85], total[85] = "";
    int len, i, j, k;

    while(gets(ch)){
        len = strlen(ch);
        for(i = 0; i < len; i++){
            if(ch[i] >= 'A' || ch[i] <= 'Z')
                k = ch[i];
            else if(ch[i] >= 'a' || ch[i] <= 'z')
                k = ch[i];
            else if(ch[i] == ' ')
                k = ch[i];
            else if(ch[i] == '?')
                k = ch[i];
            else if(ch[i] == ',')
                k = ch[i];
            else if(ch[i] == '.')
                k = ch[i];
            else if(ch[i] == ':')
                k = ch[i];
            else if(ch[i] == ';')
                k = ch[i];
            else if(ch[i] == '!')
                k = ch[i];
            j = 0;
            while(k != 0){
                int t = k % 10;
                k /= 10;
                s[j] = t + '0';
                j++;
            }
            s[j] = '\0';
            strrev(s);
            strcat(total, s);
        }
        printf("%s\n",strrev(total));
        strcpy(total, "");
    }

    return 0;
}
