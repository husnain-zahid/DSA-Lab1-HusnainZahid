#include <iostream>
#include <vector>
using namespace std;

vector<int> index(int arr[], int size, int key){
    vector<int> indices;
    for (int i = 0; i<size; i++){
        if (arr[i] == key){
            indices.push_back(i);
        }
    }
    return indices;
}
int main() {

    // First Case: Key exists multiple times
    int array[] = {9, 4, 5, 8, 5, 3, 2, 5, 1, 7};
    int sizeOfArray = sizeof(array)/sizeof(array[0]);

    vector<int> result = index(array, sizeOfArray, 5);
    cout<< "The key 5 exists at the indices: \n";
    for (int j = 0; j < result.size(); j++){
        cout<< result[j]<<" ";
    }
    
    // Second Case: Key does not exist in the array
    int arr[] = {1, 7, 2, 4, 8, 3, 8, 0, 3, 2};
    int sizeOfArr = sizeof(arr)/sizeof(arr[0]);

    vector<int> final = index(arr, sizeOfArr, 6);
    cout<< "The key 6 exists at the indices: \n";
    if (final.empty())
        cout<<"Nah the key does not exist";
    else
        for (int k = 0; k < final.size(); k++){
            cout<< final[k]<<" ";
    }

    // Third Case: Array is empty
    int arr2[] = {};
    int sizeOfArr2 = sizeof(arr2)/sizeof(arr2[0]);
    vector<int> end = index(arr2, sizeOfArr2, 9);
    cout<< "The key 9 exists at the indices: \n";
    if (end.empty())
        cout<<"The array is null";
    else
        for (int i = 0; i < end.size(); i++){
            cout<< end[i]<< " ";
        }
    return 0;
}