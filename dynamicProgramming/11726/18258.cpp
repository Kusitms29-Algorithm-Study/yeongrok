#include<iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    int* tile = (int*)malloc((n+1) * sizeof(int));

    tile[1] = 1;
    tile[2] = 2;

    if (n == 1 || n == 2) {
        cout << tile[n];
        return 0;
    }
    else {
        for (int i = 3; i <= n; i++) {
            tile[i] = tile[i - 1] + tile[i - 2];
            tile[i] = tile[i] % 10007;
        }
    }

    cout << tile[n];
}