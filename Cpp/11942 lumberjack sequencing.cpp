#include<iostream>
using namespace std;

int main()
{
    int test,number[15],countMax,i,x,y;

    cout<<"Lumberjacks:"<<endl;
    cin>>test;
    while(test--){
        countMax=0;
        for(i=0;i<10;i++)
            cin>>number[i];
        x=number[0];
        y=number[1];
        if(x>y){
            for(i=0;i<9;i++){
                if(number[i]>number[i+1])
                    countMax++;
            }
        }
        else if(x<y){
            for(i=0;i<9;i++){
                if(number[i]<number[i+1])
                    countMax++;
            }
        }
        if(countMax==9)
            cout<<"Ordered"<<endl;
        else
            cout<<"Unordered"<<endl;
    }

    return 0;
}
