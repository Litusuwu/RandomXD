#include <iostream>
#include <stack>
#include <string>

using namespace std;

void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    
    stack<char> stk;
    string solution;
    
    for (char c : s) {
        if (c == '(' || c == '?') {
            stk.push(c);
        } else if (c == ')' && !stk.empty()) {
            stk.pop();
        } else if (c == '?' && !stk.empty()) {
            solution += '(';
            stk.pop();
        } else {
            solution += '(';
        }
    }
    
    while (!stk.empty()) {
        solution += ')';
        stk.pop();
    }
    
    if (!stk.empty()) {
        cout << ":(" << endl;
    } else {
        cout << solution << endl;
    }
}

int main() {
    solve();
    return 0;
}