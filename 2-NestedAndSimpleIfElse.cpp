
#include <iostream>
using namespace std;

int main() {
    //Problem Statement1-if age>=18 print adult else minor
    int age;
    cout<<"Enter the age:"<<endl;
    cin>>age;
    if(age>=18){
        cout<<"You are adult!";
    }
    else{
        cout<<"You are a minor ,relax karo!";
    }
    
    
    //Problem Statement 2
    /*
    Give grades but taking in marks
    below 25-F
    25-44-E
    45-49-D
    50-59-C
    60-79-B
    80-100-A
    */
    // int marks;
    // cout<<"Enter Your marks to know the grade!:"<<endl;
    // cin>>marks;
    
    // if(marks<25){
    //     cout<<"Grade F";
    // }
    // else if(marks<=44){
    //     cout<<"Grade E";
    // }
    // else if(marks<=49){
    //     cout<<"Grade D";
    // }
    // else if(marks<=59){
    //     cout<<"Grade C";
    // }
    // else if(marks<=79){
    //     cout<<"Grade B";
    // }
    // else if (marks<=100){
    //     cout<<"Grade A";
    // }
    // else{
    //     cout<<"Invalid marks entry,Please try again!";
    // }
    
    
    //Problem Statement 3-Nested if else
    /*
    if age <18-Not eligible for job
    if age>=18-Eligible for job
    if age >=55 and age<=57 -Eligible for job but retirement soon
    if age >57-Retirement time
    */
    // int age;
    // cout<<"Enter your age:"<<endl;
    // cin>>age;
    
    // if(age<18){
    //     cout<<"Not eligible for a job!";
    // }
    // else if(age<=57){
    //     cout<<"Eligible for job";
    //     if(age>=55){
    //         cout<<",but retirement soon";
    //     }
    // }
    // else{
    //     cout<<"Retirement time,Relax :)";
    // }

    //Switch Statements
    //Problem Statement-Take the day no and print the corresponding day
    //for 1 print Monday and for 2 Tuesday and so on
    int day;
    cout<<"Enter a number to know the day!"<<endl;
    cin>>day;
    switch(day){
        case 1:
            cout<<"Modanday";
            break;
        case 2:
            cout<<"Tuesday";
            break;
        case 3:
            cout<<"Wednesday";
            break;
        case 4:
            cout<<"Thrusday";
            break;
        default:
            cout<<"Invalid input ,try again!";
    }
    return 0;
}
