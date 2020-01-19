#include<iostream>
#include<cstdio>
using namespace std;

int main()
{
    int b,t,i=0;
    long int a,f;
    double c=0;

    scanf("%d",&t);
    while(t--){
        i++;
        scanf("%ld %d",&a,&b);
        if(a>=0 && b<=100){
            f=(9.0*a)/5.0+32;
            f+=b;
            c=5.0*(f-32.0)/9.0;
        }
        printf("Case %d: %.2lf\n",i,c);
    }

    return 0;
}
