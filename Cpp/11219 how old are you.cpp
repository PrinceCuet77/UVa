#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int y1,y2,d1,d2,m1,m2,age,test,caseN=0;

    cin>>test;
    while(test--){
        scanf("%d%*c%d%*c%d",&d1,&m1,&y1);
        scanf("%d%*c%d%*c%d",&d2,&m2,&y2);
        if(y1<y2){
            cout<<"Case #"<<++caseN<<": Invalid birth date"<<endl;
            continue;
        }
        else if(y1==y2){
            if(m1<m2){
                cout<<"Case #"<<++caseN<<": Invalid birth date"<<endl;
                continue;
            }
            else if(m1==m2){
                if(d1<d2){
                    cout<<"Case #"<<++caseN<<": Invalid birth date"<<endl;
                    continue;
                }
                else
                    age=0;
            }
            else
                age=0;
        }
        else{
            if(m1<m2){
                age=y1-y2;
                age--;
            }
            else if(m1==m2){
                if(d1>=d2)
                    age=y1-y2;
                else{
                    age=y1-y2;
                    age--;
                }
            }
            else
                age=y1-y2;
        }
        if(age>130)
            cout<<"Case #"<<++caseN<<": Check birth date"<<endl;
        else if(age>0)
            cout<<"Case #"<<++caseN<<": "<<age<<endl;
        else
            cout<<"Case #"<<++caseN<<": "<<age<<endl;
    }

    return 0;
}
