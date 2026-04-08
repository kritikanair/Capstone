#include <iostream>
#include <vector>

using namespace std;

void merge(vector<int>& arr, int low, int mid, int high) {
    vector<int> left(arr.begin() + low, arr.begin()+ mid+1);
    vector<int> right(arr.begin() + mid+1, arr.begin() + high+1);

    int i=0, j=0, k=low;

    while(i<left.size() && j<right.size()) {
        if(left[i] <= right[j]) {
            arr[k]= left[i];
            i++;
        }
        else{
            arr[k]= right[j];
            j++;
        }
        k++;
    }

    //copy rest elements
    while(i<left.size()) {
        arr[k]= left[i];
        i++;
        k++;
    }
    while(j<right.size()) {
        arr[k]= right[j];
        j++;
        k++;
    }

}

void mergesort(vector<int> &arr, int low, int high) {
    if(low < high) {
        int mid = (low + high)/2;
        mergesort(arr, low, mid);
        mergesort(arr, mid+1, high);

        merge(arr, low, mid, high);
    }
}

int main() {
    vector<int> arr = {6, 9, 5, 1, 0, 2};

    mergesort(arr, 0, 5);

    for(int i=0; i<6; i++) {
        cout<<arr[i]<<" ";
    }

}