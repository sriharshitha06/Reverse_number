#include<iostream>
#include<string>
using namespace std;

int main() {
    int n;
    cin >> n;
    string str = to_string(n);
    string revStr = "";
    for (int i = str.length() - 1; i >= 0; i--) {
        revStr += str[i];
    }
    int rn = stoi(revStr);
    cout << rn;
    return 0;
}
