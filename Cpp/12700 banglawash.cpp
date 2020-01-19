#include<iostream>
#include<string.h>
using namespace std;

int main()
{
    int i,n,w,b,test,caseN=0,a,t;
    char ch[16];

    cin>>test;
    while(test--){
        cin>>n;
        cin>>ch;
        t=b=w=a=0;
        for(i=0;i<n;i++){
            if(ch[i]=='B')
                b++;
            else if(ch[i]=='W')
                w++;
            else if(ch[i]=='A')
                a++;
            else if(ch[i]=='T')
                t++;
        }
        if(a==n)
            cout<<"Case "<<++caseN<<": "<<"ABANDONED"<<endl;
        else if(w+a==n)
            cout<<"Case "<<++caseN<<": "<<"WHITEWASH"<<endl;
        else if(b+a==n)
            cout<<"Case "<<++caseN<<": "<<"BANGLAWASH"<<endl;
        else if(b>w)
            cout<<"Case "<<++caseN<<": "<<"BANGLADESH "<<b<<" - "<<w<<endl;
        else if(w>b)
            cout<<"Case "<<++caseN<<": "<<"WWW "<<w<<" - "<<b<<endl;
        else if(w==b)
            cout<<"Case "<<++caseN<<": "<<"DRAW "<<b<<" "<<t<<endl;
    }

    return 0;
}
