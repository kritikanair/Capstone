#include <bits/stdc++.h>
using namespace std;

void bubbleSort(vector<int> &arr) {
    int n= arr.size();

    for(int i=0; i<n; i++) {
        bool flag = false;
        for(int j=0; j<n-i-1; j++) {
            if(arr[j] > arr[j+1]) {
                swap(arr[j], arr[j+1]);
                flag = true;
            }
        }
        if(!flag) break;
    }
}

int main() {
    vector<int> arr = {5,1,4,7,3};

    bubbleSort(arr);

    for(int n: arr) {
        cout<<n<< " ";
    }

    return 0;
}