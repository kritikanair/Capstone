#include <bits/stdc++.h>
using namespace std;

int bs(vector<int> arr, int target) {
    int low=0, high = arr.size()-1;

    while(low <= high) {
        int mid = (low + high)/2;

        if(arr[mid] == target) {
            return mid;
        }
        else if(arr[mid] > target) {
            high = mid-1;
        }
        else {
            low = mid+1;
        }
    }

    return -1;
}

int main() {
    vector<int> arr = {5,7,9,12,15};
    int x = 12;

    cout<< bs(arr, x);
    return 0;
}