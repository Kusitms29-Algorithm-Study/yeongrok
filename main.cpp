#include <iostream>
#include <stack>

//https://www.acmicpc.net/problem/1935
using namespace std;


int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);

    int n;
    cin >> n;
    int* value = new int[n+1];
    string model;
    cin >> model;

    stack<double> stack;

    for(int i=0; i<n; i++){
        cin >> value[i];
    }

    for(char i : model){
        if(i >= 'A' && i <= 'Z'){
            stack.push(value[i - 'A']);
        }
        else{
            double num1 = stack.top();
            stack.pop();
            double num2 = stack.top();
            stack.pop();
            if(i == '*'){
                stack.push(num2 * num1);
            }
            else if(i == '/'){
                stack.push(num2 / num1);
            }
            else if(i == '-'){
                stack.push(num2 - num1);
            }
            else if(i == '+'){
                stack.push(num2 + num1);
            }
        }
    }
    //소수점 둘째 자리 출력
    cout << fixed;
    cout.precision(2);
    cout << stack.top() << endl;

}


