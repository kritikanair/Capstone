#include <iostream>
#include <vector>

using namespace std;

int partition(vector<int>& arr ,int low, int high) {
    int pivot = arr[high];
    int i = low-1;
    
    for(int j = low; j<high ; j++) {
        if(arr[j] < pivot) {
            i++;
            swap(arr[i], arr[j]);
        }
    }

    int temp = arr[i+1];
    arr[i+1] = arr[high];
    arr[high] = temp;

    return i+1;
}

void quicksort(vector<int> &arr, int low, int high) {
    if(low<high) {
        int p = partition(arr, low, high);
        //left
        quicksort(arr, low, p-1);
        quicksort(arr, p+1, high);
    }
}

int main() {
    vector<int> arr = {6, 9, 5, 1, 0, 2};

    quicksort(arr, 0, 5);

    for(int i=0; i<6; i++) {
        cout<<arr[i]<<" ";
    }

    return 0;
}