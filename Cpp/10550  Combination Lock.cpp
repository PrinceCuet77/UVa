#include<iostream>
using namespace std;

int turn(int a,int b,int d){
    if(d==1){
        if(b>=a)
            return b-a;
        else
            return (40-a+b);
    }
    else if(d==0){
        if(a>=b)
            return a-b;
        else
            return (40-b+a);
    }
}

int main()
{
    int a,b,c,d,s;
    while((cin>>a>>b>>c>>d),(a||b||c||d)){
        s=120;
        s+=turn(a,b,0);
        s+=turn(b,c,1);
        s+=turn(c,d,0);
        cout<<s*9<<endl;
    }

    return 0;
}
