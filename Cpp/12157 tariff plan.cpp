#include<iostream>
using namespace std;

int main()
{
    int test,caseN=0,n,a[25],mile,juice,i,t,t1;

    cin>>test;
    while(test--){
        cin>>n;
        for(i=0;i<n;i++)
            cin>>a[i];
        mile=juice=0;
        for(i=0;i<n;i++){
            t=a[i];
            if(a[i]<29)
                mile+=10;
            else{
                t1=a[i]/30;
                a[i]%=30;
                mile=mile+(t1*10);
                if(a[i]<=29)
                    mile+=10;
            }
            a[i]=t;
            t1=0;
            if(a[i]<59)
                juice+=15;
            else{
                t1=a[i]/60;
                a[i]%=60;
                juice=juice+(t1*15);
                if(a[i]<=59)
                    juice+=15;
            }
        }
        if(juice==mile)
            cout<<"Case "<<++caseN<<": Mile Juice "<<juice<<endl;
        else if(juice<mile)
            cout<<"Case "<<++caseN<<": Juice "<<juice<<endl;
        else
            cout<<"Case "<<++caseN<<": Mile "<<mile<<endl;
    }

    return 0;
}
