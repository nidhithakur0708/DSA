//Functions
#include <iostream>
using namespace std;
//Functions are set of code which performs something for you
//They modularize code
//Functions are used to increase readability
//Functions are used to use same code multiple times


//1.Void Functions-Doesnt return anything
//2.return
//3.parameterised
//4.Non Parameterised
//5.PassByValue
//6.PassbyReference

//1.Void Function-Parameterized
void printName(string name){
    cout<<"Hey "<<name<<endl;
}
//2.return
//Take Two numbers and take the sum
int sum(int num1,int num2){
    int num3=num1+num2;
    return num3;
}
//Any int float double make sure that function has a return value

//5.Pass by value-sends the copy and doesnt chnage the original value
void doSomething(int num) {
    cout<<num<<endl;
    num+=5;
    cout<<num<<endl;
    num+=5;
    cout<<num<<endl;
}

//6.Pass by reference changes the original Value
void doSome(string &s){
    s[0]='r';
    cout<<"Inside the function "<<s<<endl;
}

//Arrays are always Pass by Reference Without &
//Because the address is passed and not the value

void arrayModify(int arr[],int n){
    arr[0]+=100;
    cout<<"The value inside function is:"<<arr[0]<<endl;
}

int main() {
    // printName("Shivam");
    // int num1,num2;
    // cin>>num1>>num2;
    // int res=sum(num1,num2);
    // cout<<res;
    
    //Pass by value
    // int num=10;
    // doSomething(num);
    // cout<<"The changed num is:"<<num<<endl;

    
    //Pass by Refernce ,&in the argument send the address for the variable and not the copy ,hence the function affects the original value itself
    // string s="nidhi";
    // doSome(s);
    // cout<<"In the main the function: "<<s<<endl;
    
    int n=5;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    arrayModify(arr,n);
    cout<<"The value inside main:"<<arr[0]<<endl;
    
    return 0;
}
