// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main() {
    //Take array input
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    //pre compute 
    //hash should be of a size be till the greatest element in the array
    int hash[13]={0};
    for(int i=0;i<n;i++){
        hash[arr[i]]+=1;
    }
    
    //Take number of inputs!
    int q;
    cout<<"Enter number of queries:"<<endl;
    cin>>q;
    while(q--){
        int number;
        cin>>number;
        cout<<"Number is:"<<number<<" count is:"<<hash[number]<<endl;
    }

    return 0;
}
