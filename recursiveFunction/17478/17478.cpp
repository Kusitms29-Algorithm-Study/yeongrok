#include <iostream>

using namespace std;

void recur(int a, int b) { // b는 슬러쉬 개수
    string q = "재귀함수가 뭔가요?";
    string an1 = "잘 들어보게. 옛날옛날 한 산 꼭대기에 이세상 모든 지식을 통달한 선인이 있었어.";
    string an2 = "마을 사람들은 모두 그 선인에게 수많은 질문을 했고, 모두 지혜롭게 대답해 주었지.";
    string an3 = "그의 답은 대부분 옳았다고 하네. 그런데 어느 날, 그 선인에게 한 선비가 찾아와서 물었어.";
    string ann = "라고 답변하였지.";
    string final = "재귀함수는 자기 자신을 호출하는 함수라네";
    string slash = "";

    for(int i=0; i<b; i++) {
        slash += "_";
    }

    cout << slash << "\"" + q + "\"" << "\n";
    if(a==0) {
        cout << slash << "\"" + final + "\"" << "\n";
        cout << slash + ann << "\n";
        return;
    }
    else {

        cout << slash << "\"" + an1 << "\n";
        cout << slash << an2  << "\n";
        cout << slash << an3 + "\"" << "\n";
        recur(a-1, b+4);
        cout << slash + ann << "\n";
        return;
    }
}

int main()
{
    int a;
    cin >> a;
    cout << "어느 한 컴퓨터공학과 학생이 유명한 교수님을 찾아가 물었다." << "\n";

    recur(a,0);
    return 0;
}