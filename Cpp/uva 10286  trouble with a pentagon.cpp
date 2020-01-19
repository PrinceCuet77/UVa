#include<bits/stdc++.h>
#define t 1.067395682
using namespace std;

int main()
{
    double pentagon,square;

    while(scanf("%lf",&pentagon)==1){
        square=pentagon*t;
        printf("%.10lf\n",square);
    }

    return 0;
}
