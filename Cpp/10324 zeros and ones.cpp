#include<iostream>
#include<string.h>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    char t[2000001],ch;
    long i,j,n,a,b,caseN=0,temp,len;
    int flag;

    while(gets(t)){
        len=strlen(t);
        if(len==0)
            break;
        cin>>n;
        cout<<"Case "<<++caseN<<":"<<endl;
        for(i=1;i<=n;i++){
            cin>>a>>b;
            if((len-1)<a && (len-1)<b){
                cout<<"No"<<endl;
                flag=1;
                break;
            }
            if(a>b){
                temp=a;
                a=b;
                b=temp;
            }
            flag=0;
            ch=t[a];
            for(j=a;j<=b;j++){
                if(t[j]!=ch){
                    cout<<"No"<<endl;
                    flag=1;
                    break;
                }
            }
            if(flag==0)
                cout<<"Yes"<<endl;
        }
        getchar();
    }

    return 0;
}
