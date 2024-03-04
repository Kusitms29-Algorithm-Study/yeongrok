#include <iostream>
#include <string>
#include <sstream>
#include <cstring>
//https://www.acmicpc.net/problem/18258
using namespace std;

bool isEmpty(int f, int r) {
    if(f == r){
        return true;
    }
    return false;
}

int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);

    int num;
    cin >> num;

    int* queue = new int[num + 1];
    int f = 0;
    int r = 0;

    for(int i=0; i<num; i++){
        string command;
        cin >> command;

        if(command == "push"){
            int v = 0;
            cin >> v;
            queue[f] = v;
            f++;
            if(f >= num){
                f = 0;
            }
        }
        else if(command == "front"){
            if(isEmpty(f, r)){
                cout << -1 << "\n";
                continue;
            }
            cout << queue[r] << "\n";
        }
        else if(command == "back"){
            if(isEmpty(f, r)){
                cout << -1 << "\n";
                continue;
            }
            cout << queue[f-1] << "\n";
        }
        else if(command =="size"){
            cout << abs(f-r) << "\n";
        }
        else if(command == "empty") {
            if (isEmpty(f, r)) {
                cout << 1 << "\n";
                continue;
            }

            cout << 0 << "\n";
        }
        else if(command == "pop"){
            if(isEmpty(f, r)){
                cout << -1 << "\n";
                continue;
            }
            cout << queue[r] << "\n";
            r++;
        }

    }

}


