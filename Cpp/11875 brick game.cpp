#include<iostream>
using namespace std;

int main()
{
    int mem[10],t,i,countNum=0,player,capt,countMin=0,countMax=0,ck;

    cin>>t;
    while(t--){
        countNum++;
        cin>>player;
        if(player>1 && player<11){
            for(i=0;i<player;i++)
                cin>>mem[i];
            ck=player%2;
            capt=player/2;
            if(ck!=0){
                for(i=0;i<player;i++){
                    if(mem[capt]>mem[i])
                        countMax++;
                    else if(mem[capt]<mem[i])
                        countMin++;
                }
                if(countMax==countMin)
                    cout<<"Case "<<countNum<<": "<<mem[capt]<<endl;
                else{
                    for(i=0;i<player;i++){
                        if(mem[capt+1]>mem[i])
                            countMax++;
                        else if(mem[capt+1]<mem[i])
                            countMin++;
                    }
                    if(countMax==countMin)
                        cout<<"Case "<<countNum<<": "<<mem[capt+1]<<endl;
                    else{
                        for(i=0;i<player;i++){
                            if(mem[capt-1]>mem[i])
                                countMax++;
                            else if(mem[capt-1]<mem[i])
                            countMin++;
                        }
                        if(countMax==countMin)
                            cout<<"Case "<<countNum<<": "<<mem[capt-1]<<endl;
                    }
                }
            }
        }
    }

    return 0;
}
