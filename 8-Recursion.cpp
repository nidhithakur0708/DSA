
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
// void printName(int i,int n){
//     if(i>n) return; //base case,print name till i is less than n 
//     cout<<"Nidhi"<<endl;
//     printName(i+1,n);
// }
// int main(){
//     int n;
//     cin>>n;
//     printName(1,n);
// }

//3.Print 1 to N using recursion 
// void printNumbers(int i,int n){
//     if(i>n) return; //base condition to stop
//     cout<<i<<endl;
//     printNumbers(i+1,n);
// }
// int main(){
//     int n;
//     cin>>n;
//     printNumbers(1,n);
// }

//4.Print N to 1 using recursion
/*
Dry Run as follows:
f(3,1)
f(3,2)
f(3,3)
f(3,4) //base case
cout<<3
cout<<2
cout<<1
*/
// void printNumbers(int n,int i){
//     if(n<i) return;
//     printNumbers(n,i+1);
//     cout<<i<<" ";
// }
// int main(){
//     int n;
//     cin>>n;
//     printNumbers(n,1);
// }

//5.Sum of Numbers n-Functional way to return sum instead of printing
// int Nnumbersum(int n){
//     if(n==0) return 0;
//     return n+Nnumbersum(n-1);
// }

// int main(){
//     int n;
//     cin>>n;
//     cout<<"The sum of numbers is:"<<Nnumbersum(n);
// }

//6.Factorial of a number
// int fact(int n){
//     if(n==1) return 1;
//     return n*fact(n-1);
// }
// int main(){
//     int n;
//     cin>>n;
//     cout<<fact(n);
// }

//7. Reverse a array
void reverse_array(int i,int n,int arr[]){
    if(i>=n/2) return;
    swap(arr[i],arr[n-i-1]);
    reverse_array(i+1,n,arr);
    
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    //Input for array
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    reverse_array(0,n,arr);
    cout<<"Reversed array is:"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
//8.Check if string is a palindrome
bool check_palindrome(string &s,int i){
    if(i>=s.size()/2) return true;
    if(s[i]!=s[s.size()-i-1]) return false;
    return check_palindrome(s,i+1);
}
int main(){
    string s="madam";
    cout<<check_palindrome(s,0);
}
//9.Fibnocaii number
int fibo(int n){
    if(n<=1) return n;
    int last=fibo(n-1);
    int slast=fibo(n-2);
    return last+slast;
}
int main(){
    int n;
    cin>>n;
    cout<<"The fibo at n is:"<<fibo(n);
}
















