#include <iostream>
using namespace std;
int main(){
    int a = 5;
    int b = 10;
    int* ptr1 = &a;
    int* ptr2 = &b;
    //since memory is allocated consecutively, we can also verify that by taking two consecutive elements of an array
    cout << ptr2 << endl;//0x61fefc => 6422268
    cout << ptr1 << endl;//0x61ff00 => 6422272
    //6422272 - 6422268 = 4;


    //converting the char* because char takes 1 byte in memory so we can get no. of bytes for int
    int size = (char*)ptr1 - (char*)ptr2;

    
    cout << "Size of integer data type is " << size << endl;
    

    return 0;
}
