#include <bits/stdc++.h>
using namespace std;

//brute force
bool check(string s, string t) {
    if(s.size() != t.size()) return false;

    sort(s.begin(), s.end());
    sort(t.begin(), t.end());

    return (s == t);
}

//optimized
bool check2(string s, string t) {
    unordered_map <char, int> m;
    
    for(char ch: s) {
        m[ch]++;
    }

    for(char ch: t) {
        m[ch]--;
    }

    for(auto i : m) {
        if(i.second != 0) {
            return false;
        }
    }
    return true;
}

int main() {
    string s = "listen";
    string t = "silent";

    //brute force
    cout<< check(s,t)<<endl;

    //optimized
    cout<< check2(s,t);
    return 0;
}