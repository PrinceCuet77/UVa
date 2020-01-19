#include<bits/stdc++.h>
#include<map>
using namespace std;

map < string, int > mp;
void gen(){
    int t = 0;
    string ch, ch1, ch2, ch3, ch4;
    for(char a = 'a'; a <= 'z'; a++){
        ch = a;
        mp[ch] = ++t;
    }
    for(char a = 'a'; a <= 'y'; a++){
        for(char b = a + 1; b <= 'z'; b++){
            ch = a;
            ch1 = b;
            ch = ch + ch1;
            mp[ch] = ++t;
        }
    }
    for(char a = 'a'; a <= 'x'; a++){
        for(char b = a + 1; b <= 'y'; b++){
            for(char c = b + 1; c <= 'z'; c++){
                ch = a;
                ch1 = b;
                ch2 = c;
                ch = ch + ch1 + ch2;
                mp[ch] = ++t;
            }
        }
    }
    for(char a = 'a'; a <= 'w'; a++){
        for(char b = a + 1; b <= 'x'; b++){
            for(char c = b + 1; c <= 'y'; c++){
                for(char d = c + 1; d <= 'z'; d++){
                    ch = a;
                    ch1 = b;
                    ch2 = c;
                    ch3 = d;
                    ch = ch + ch1 + ch2 + ch3;
                    mp[ch] = ++t;
                }
            }
        }
    }
    for(char a = 'a'; a <= 'v'; a++){
        for(char b = a + 1; b <= 'w'; b++){
            for(char c = b + 1; c <= 'x'; c++){
                for(char d = c + 1; d <= 'y'; d++){
                    for(char e = d + 1; e <= 'z'; e++){
                        ch = a;
                        ch1 = b;
                        ch2 = c;
                        ch3 = d;
                        ch4 = e;
                        ch = ch + ch1 + ch2 + ch3 + ch4;
                        mp[ch] = ++t;
                    }
                }
            }
        }
    }
}

int main()
{
    gen();
    char ch[20];
    while(scanf("%s", ch) == 1)
        printf("%d\n", mp[ch]);

    return 0;
}
