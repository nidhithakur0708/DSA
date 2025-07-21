//Recurrsion
#include <bits/stdc++.h>
using namespace std;


// //1.Recursion 1st basic example for concept understanding!
// int cnt=0;
// void print(){
//     if(cnt==3) return; //Base Condition to stop recurrsion
//     cout<<cnt<<endl;
//     cnt++;
//     print();
// }

// int main() {
//     print();
//     return 0;
// }


//2.Print name N times using Recurrsion!
void printName(int i,int n){
    if(i>n) return; //base case,print name till i is less than n 
    cout<<"Nidhi"<<endl;
    printName(i+1,n);
}
int main(){
    int n;
    cin>>n;
    printName(1,n);
}
