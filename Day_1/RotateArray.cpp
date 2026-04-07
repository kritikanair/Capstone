#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> arr = {5, 2, 1, 7, 8};
    int k= 3;

    reverse(arr.begin(), arr.end());

    reverse(arr.begin(), arr.begin() + k);

    reverse(arr.begin() + k, arr.end());

    for(int n: arr) {
        cout<< n<<" ";
    }
    return 0;
}