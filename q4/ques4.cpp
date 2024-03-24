#include<iostream>
#include<vector>
#include<climits>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    //finding smallest and largest element
    int min = INT_MAX; // macros
    int max = INT_MIN; 
    for(int i = 0; i < arr.size();i++){
        if(arr[i] >= max ){
            max = arr[i];
        }
        if(arr[i] <= min){
            min = arr[i];
        }
    }
    cout << "Smallest: "<<min<<endl;
    cout << "Largest: "<<max<<endl;
    
    return 0;
}