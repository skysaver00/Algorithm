#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main() {
    string sentence;
    stack<char> stack;

    int t;
    cin >> t;
    cin.ignore();
    for(int i = 0; i < t; i++) {
        getline(cin, sentence);
        sentence += '\n';
        cout << sentence;
    }

    return 0;
}