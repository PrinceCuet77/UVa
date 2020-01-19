#include<iostream>
using namespace std;

int main()
{
    int test,num,wall[50],high,low,c=0,ck;

    cin>>test;
    while(test--){
        c++;
        low=high=0;
        cin>>num;
        for(int i=0;i<num;i++)
            cin>>wall[i];
        ck=wall[0];
        for(int i=1;i<num;i++){
            if(ck==wall[i]){
                ck=wall[i];
                continue;
            }
            else if(ck<wall[i]){
                high++;
                ck=wall[i];
            }
            else{
                low++;
                ck=wall[i];
            }
        }
        cout<<"Case "<<c<<": "<<high<<" "<<low<<endl;
    }

    return 0;
}
