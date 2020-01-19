#include<iostream>
#include<string.h>
using namespace std;

int main()
{
    int caseN=0;
    char st[15];

    while(cin>>st){
        caseN++;
        if(strcmp(st,"#")==0)
            return 0;
        else{
            if(strcmp(st,"HELLO")==0)
                cout<<"Case "<<caseN<<": "<<"ENGLISH"<<endl;
            else if(strcmp(st,"HOLA")==0)
                cout<<"Case "<<caseN<<": "<<"SPANISH"<<endl;
            else if(strcmp(st,"HALLO")==0)
                cout<<"Case "<<caseN<<": "<<"GERMAN"<<endl;
            else if(strcmp(st,"BONJOUR")==0)
                cout<<"Case "<<caseN<<": "<<"FRENCH"<<endl;
            else if(strcmp(st,"CIAO")==0)
                cout<<"Case "<<caseN<<": "<<"ITALIAN"<<endl;
            else if(strcmp(st,"ZDRAVSTVUJTE")==0)
                cout<<"Case "<<caseN<<": "<<"RUSSIAN"<<endl;
            else
                cout<<"Case "<<caseN<<": "<<"UNKNOWN"<<endl;
        }
    }

    return 0;
}
