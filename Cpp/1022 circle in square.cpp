#include<iostream>
#include<math.h>
#include<stdio.h>
using namespace std;

#define pi 2*acos(0.0)

int main()
{
    int test,caseN=0;
    double r,o,s;

    cin>>test;
    while(test--){
        cin>>r;
        o=pi*r*r;
        s=(2*r)*(2*r);
        cout<<"Case "<<++caseN<<": ";
        printf("%.2lf\n",s-o);
    }

    return 0;
}
