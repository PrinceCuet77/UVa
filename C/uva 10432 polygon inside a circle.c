#include<stdio.h>
#include<math.h>
#define PI acos(-1.0)

int main()
{
    double angle,radius,Base,Hight,area,ra;
    double arm;

    while(scanf("%lf %lf",&radius,&arm)==2){
        angle=360/arm;
        angle=180-angle;
        angle/=2;
        ra=PI/180.0;
        Base=(cos(angle*ra))*2*radius;
        Hight=(sin(angle*ra))*radius;
        area=0.5*Base*Hight*arm;
        printf("%.3lf\n",area);
    }

    return 0;
}

