#include<iostream>
#include<string.h>
using namespace std;

int main()
{
    int test,len;
    char letter[15];

    cin>>test;
    while(test--){
        cin>>letter;
        len=strlen(letter);
        if(len==5)
            cout<<"3"<<endl;
        else{
            if((letter[0]=='o' && letter[2]=='e') || (letter[0]=='o' && letter[1]=='n') || (letter[1]=='n' && letter[2]=='e'))
                cout<<"1"<<endl;
            else
                cout<<"2"<<endl;
        }
    }

    return 0;
}
