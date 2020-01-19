#include<iostream>
using namespace std;

int main()
{
    int road,roadname,caseN=0,roadmul;

    while(cin>>roadname>>road){
        if(roadname==0 && road==0)
            return 0;
        roadmul=(roadname-1)/road;
        if(roadmul>26)
            cout<<"Case "<<++caseN<<": "<<"impossible"<<endl;
        else
            cout<<"Case "<<++caseN<<": "<<roadmul<<endl;
    }

    return 0;
}
