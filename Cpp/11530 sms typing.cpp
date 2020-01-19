#include<iostream>
#include<string.h>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    char a[101];
    int i,countN,test,caseN=0,len;

    cin>>test;
    getchar();
    while(test--){
        countN=0;
        gets(a);
        len=strlen(a);
        for(i=0;i<len;i++){
            if(a[i]=='s' || a[i]=='z')
                countN+=4;
            else if(a[i]=='b' || a[i]=='e' || a[i]=='h' || a[i]=='k' || a[i]=='n' || a[i]=='q' || a[i]=='u' || a[i]=='x')
                countN+=2;
            else if(a[i]=='c' || a[i]=='f' || a[i]=='i' || a[i]=='l' || a[i]=='o' || a[i]=='r' || a[i]=='v' || a[i]=='y')
                countN+=3;
            else
                countN+=1;
        }
        cout<<"Case #"<<++caseN<<": "<<countN<<endl;
    }

    return 0;
}
