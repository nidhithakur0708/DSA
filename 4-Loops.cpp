//For while and do while loops

#include <iostream>
using namespace std;

int main() {
    //For Loops
    // for(int i=1;i<=10;i+=1){
    //     cout<<"Striver"<<endl;
    // }
    // //Scope of i is not outside the block
    // //If conditions can be written inside the for loop
    
    
    // //While loop-Check Print Increase
    // int i;
    // while(i<=5){
    //     cout<<"Nidhi "<<i<<endl;
    //     i=i+1;
    // }
    
    //Do-while
    //When u want the code to execute minimum of one time
    //do makes sure the code is executed alteast once even if the condition is false
    int i=2;
    do{
        cout<<"Nidhi! "<<i<<endl;
    } while(i<=1);
    cout<<i<<endl;

    return 0;
}
