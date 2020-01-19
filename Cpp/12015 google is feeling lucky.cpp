#include<iostream>
using namespace std;

int main()
{
    char google[10][101];
    int rel[10],test,cheaker,i,caseN=0;

    cin>>test;
    while(test--){
        for(i=0;i<10;i++)
            cin>>google[i]>>rel[i];
        cheaker=rel[0];
        for(i=1;i<10;i++){
            if(cheaker<rel[i])
                cheaker=rel[i];
        }
        cout<<"Case #"<<++caseN<<":"<<endl;
        for(i=0;i<10;i++){
            if(rel[i]==cheaker){
                cout<<google[i]<<endl;
            }
        }
    }

    return 0;
}
