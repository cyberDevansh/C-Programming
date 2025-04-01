#include <bits/stdc++.h>
using namespace std;


void printStars(int i, int n) {
    if (i == 0) return;  // Base Case
    for (int j = 0; j < i; j++) {
        cout << "* ";
    }
    cout << endl;
    printStars(i - 1, n);  // Recursive Call
}

int main() {
    int n;
    cin >> n;
    printStars(n, n);
    return 0;
}
