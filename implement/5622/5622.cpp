#include <iostream>

using namespace std;

int main()
{
    string di;
    int t = 0;
    getline(cin,di);
    char alpha[8][4] = {{'A','B','C','\0'},{'D','E','F','\0'},{'G','H','I','\0'},{'J','K','L','\0'},{'M','N','O','\0'},{'P','Q','R','S'},
                        {'T','U','V','\0'},{'W','X','Y','Z'}
    };
    for(int i=0; i<di.length(); i++) {
        for(int j=0; j<8;j++){
            for(int k=0; k<4; k++) {
                if(di[i] == alpha[j][k]) {
                    t+=(j+3);
                }
            }
        }
    }
    cout << t;

    return 0;
}