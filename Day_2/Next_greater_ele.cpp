#include <bits/stdc++.h>
using namespace std;

vector<int> solve(vector<int> arr) {
    stack<int> s;
    int n= arr.size();
    vector<int> ans(n);

    for(int i= n-1; i>=0; i--) {
        while(!s.empty() && s.top() < arr[i]) {
            s.pop();
        }
        
        ans[i] = s.empty() ? -1 : s.top();
        
        s.push(arr[i]);
    }
    return ans;
}

int main() {
    vector<int> arr = {1,3,4,1,2};
    vector<int> ans = solve(arr);

    for(int n : ans) {
        cout << n << " ";
    }
    return 0;
}