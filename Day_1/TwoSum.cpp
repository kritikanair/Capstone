#include <bits/stdc++.h>
using namespace std;

vector<int> twoSum(vector<int> arr, int target) {

    for(int i=0; i<arr.size(); i++) {
        for(int j = 0; j<arr.size(); j++) {
            if(arr[i] + arr[j] == target) {
                return {i,j};
            }
        }
    }

    return {-1,-1};
}

int main() {
    vector<int> arr = {2,7,11,15};
    int target = 9;

    vector<int> ans = twoSum(arr, target);

    return 0;
}
