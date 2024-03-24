#include<iostream>
using namespace std;

void swap(int* a, int* b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

void sort_array(int* arr, int size){
    for(int i = 0; i < size - 1; i++){
        for(int j = 0; j < size - i - 1; j++){
            if(*(arr + j) > *(arr + j + 1)){
                swap(arr + j, arr + j + 1);
            }
        }
    }
}


int main()
{   
    int n = 0;
    cout << "Enter the number of elements in array:"<<endl;
    cin >> n;
    int arr[n];
    cout << "Enter the elements in the array:"<<endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort_array(arr,n);
    cout << "Sorted Array: "<<endl;
    for (int i = 0; i < n; i++)
    {
       cout << arr[i] << endl;
    }
    
    return 0;
}