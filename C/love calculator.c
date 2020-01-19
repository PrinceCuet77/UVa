#include<stdio.h>
#include<string.h>

int main()
{
    char fir[30],sec[30];
    int i,count,len,t,t1,l,temp;
    double cal;

    while(gets(fir)){
        gets(sec);
        len=strlen(fir);
        count=l=0;
        for(i=0;i<len;i++){
            if(fir[i]>='a' && fir[i]<='z')
                count+=(int)fir[i]-96;
            else if(fir[i]>='A' && fir[i]<='Z')
                count+=(int)fir[i]-64;
        }
        while(count>10){
            if(count>100){
                t=count%10;
                count=count/10;
                t1=count%10;
                count=count/10;
                count=count+t+t1;
            }
            if(count<100){
                t=count%10;
                count=count/10;
                count=count+t;
            }
        }
        if(count<=10){
            if(count==10){
                t=count%10;
                count=count/10;
                l=count+t;
            }
            else
                l=count;
        }
        len=count=t=t1=i=temp=0;
        len=strlen(sec);
        for(i=0;i<len;i++){
            if(sec[i]>='a' && sec[i]<='z')
                count+=(int)sec[i]-96;
            else if(sec[i]>='A' && sec[i]<='Z')
                count+=(int)sec[i]-64;
        }
        while(count>10){
            if(count>100){
                t=count%10;
                count=count/10;
                t1=count%10;
                count=count/10;
                count=count+t+t1;
            }
            if(count<100){
                t=count%10;
                count=count/10;
                count=count+t;
            }
        }
        if(count<=10){
            if(count==10){
                t=count%10;
                count=count/10;
                count=count+t;
            }
            else
                count=count;
        }
        if(count>l){
            temp=count;
            count=l;
            l=temp;
        }
        cal=count*100;
        cal/=l;
        printf("%.2lf %%\n",cal);
    }

    return 0;
}
