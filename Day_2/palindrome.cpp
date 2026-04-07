#include <bits/stdc++.h>
using namespace std;

bool check(string s) {
    int i = 0, j = s.size()-1;

    while(i <= j) {
        if(s[i] != s[j]) return false;
        i++;
        j--;
    }

    return true;
}

int main() {
    string s = "madam";

    cout<< check(s)<<endl;

    return 0;
}