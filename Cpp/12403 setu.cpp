#include<iostream>
#include<string.h>
using namespace std;

int main()
{
    long long sum=0,k;
    int t;
    char ch[100];

    cin>>t;
    while(t--){
        cin>>ch;
        if(strcmp(ch,"donate")==0){
            cin>>k;
            sum+=k;
        }
        else
            cout<<sum<<endl;
    }

    return 0;
}
