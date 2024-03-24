#include <iostream>
#include <queue>
using namespace std;
class number{

public:
    number(int index, int num);
    int index;
    int num;
};

number::number(int index, int num) {
    this->index = index;
    this->num = num;
}

int getResult(int size, int print){
    if(size <= 1){
        return 1;
    }
    queue<number> input;
    queue<number> q;
    for(int i=0; i<size; i++){
        int n = 0;
        cin >> n;
        input.push(number(i, n));
    }


    while(!input.empty()){
        number n = input.front();
        input.pop();
        q.push(n);
        while(q.front().num < n.num){
            number p = q.front();
            q.pop();
            input.push(p);
        }
    }

    int r = 0;
    while(!q.empty()){
        r++;
        number result = q.front();
        if(result.index == print){
            return r;
        }
    }
}
int main(){
    int test = 0;
    cin >> test;
    for(int i=0; i<test; i++){
        int size = 0;
        int print = 0;
        cin >> size;
        cin >> print;

        int result = getResult(size, print);
        cout << result << endl;
    }
}
