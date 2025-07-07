#include <iostream>
using namespace std;
int main() {
    //Basics of array and strings
    /*
    Similar Data Types stored
    int arr[5];//Size if array is 5
    Indexing Starting from 0
    // */
    // int arr[5];
    // cin>>arr[0]>>arr[1]>>arr[2]>>arr[3]>>arr[4];
    // cout<<arr[3];
    
    // //You can modify the arrays!
    // arr[1]=12;
    // cout<<arr[1];
    // //The memory is consecutive memory address
    
    
    // //2D Arrays
    // int arr[3][5];
    // //arr[row][col]
    // arr[2][2]=33;
    // cout<<arr[2][2];
    
    //Strings
    string s="Nidhi";
    int len=s.size();
    cout<<s[2]<<endl;
    cout<<s[len-1]<<endl;//last index
    //You can also change
    s[len-1]='u';
    cout<<s;
    return 0;
}
