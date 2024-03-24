#include<iostream>
using namespace std;

namespace arr1D {
    void input(int arr[],int n){
    cout << "Enter 1D array elements:" << endl;
        for(int i = 0; i < n; i++){
            cin >> arr[i];
        }
    }
    void print(int arr[],int n){
        cout <<"Elements of 1D Array at Index which is a multiple of 3:"<< endl;
        for(int i = 0; i < n; i++){
            if(arr[i]%3 == 0) cout << arr[i] << endl;
        }
    }
}
namespace arr2D {
    void input(int arr[][4], int r, int c){     
        // cannot have argument as int arr[][] 
        // as compiler needs to know size of column elements for dividing memory 
        // this can be avoided by using 2d vectors ( vector<vector<int>>)
        cout << "Enter 2D array elements:" << endl;
        for (int i = 0; i < r; i++){
            for(int j = 0; j < c; j++){
                cin >> arr[i][j];
            }
        }
    }
    void print(int arr[][4],int r,int c){
        cout <<"Elements of 2D Array at Index which is a multiple of 3:"<< endl;
        for(int i = 0; i < r; i++){
            for (int j = 0; j < c; j++){
                if(arr[i][j]%3 == 0) cout << arr[i][j] << endl;
            }
        }
    
    }
} 

int main()
{   int arr_1d[9];
    int arr_2d[3][4];
    arr2D::input(arr_2d,3,4);
    arr1D::input(arr_1d,9);
    arr2D::print(arr_2d,3,4);
    arr1D::print(arr_1d,9);

    
    return 0;
}