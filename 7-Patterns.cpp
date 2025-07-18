//Patterns
#include<bits/stdc++.h>
using namespace std;

void print1(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
}
void print2(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
}
void print3(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
}
void print4(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}
void print5(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i+1;j++){
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
}
void print6(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i+1;j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}
void print7(int n){
    for(int i=0;i<n;i++){
        //space
        for(int j=0;j<n-i-1;j++){
            cout<<" ";
        }
        for(int j=0;j<2*i+1;j++){
            cout<<"*";
        }
        for(int j=0;j<n-i-1;j++){
            cout<<" ";
        }
        cout<<endl;
        
    }
}
void print8(int n){
    for(int i=0;i<n;i++){
        //space
        for(int j=0;j<i;j++){
            cout<<" ";
        }
        for(int j=0;j<2*n-(2*i+1);j++){
            cout<<"*";
        }
        for(int j=0;j<i;j++){
            cout<<" ";
        }
        cout<<endl;
        
    }
}
void print10(int n){
    for(int i=1;i<=2*n-1;i++){
        int stars=i;
        if(i>n) stars=2*n-i;
        for(int j=1;j<=stars;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}
void print11(int n){
    int start=1;
    for(int i=0;i<n;i++){
        if(i%2==0) start=1;
        else start=0;
        for(int j=0;j<=i;j++){
            cout<<start;
            start=1-start;
        }
        cout<<endl;
    }
}
void print12(int n){
    int space=2*n-2;
    for(int i=1;i<=n;i++){
        //number
        for(int j=1;j<=i;j++){
            cout<<j;
        }
        //space
        for(int j=1;j<=space;j++){
            cout<<" ";
        }
        //number
        for(int j=i;j>=1;j--){
            cout<<j;
        }
        cout<<endl;
        space-=2;
    }
    
}
void print13(int n){
    int count=1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<count<<" ";
            count++;
        }
        cout<<endl;
        
    }
}

void print14(int n){
    for(int i=0;i<n;i++){
        //starting from A and then going till A+i,A+2=C
        for(char ch='A';ch<='A'+i;ch++){
            cout<<ch<<" ";
        }
        cout<<endl;
    }
}
void print15(int n){
    for(int i=0;i<n;i++){
        for(char ch='A';ch<='A'+(n-i-1);ch++){
            cout<<ch<<" ";
        }
        cout<<endl;
    }
}

void print16(int n){
    char ch='A';
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<ch<<" ";
        }
        cout<<endl;
        ch=ch+1;
    }
}
void print17(int n){
    for(int i=0;i<n;i++){
        //space
        for(int j=0;j<(n-i-1);j++){
            cout<<" ";
        }
        //Alphabet
        char ch='A';
        int breakpoint=(2*i+1)/2;
        //After the half the char keeps on increasing!
        for(int j=1;j<=(2*i+1);j++){
            cout<<ch;
            if(j<=breakpoint) ch++;
            else ch--;
        }
        //space
        for(int j=0;j<(n-i-1);j++){
            cout<<" ";
        }
        cout<<endl;
    }
}
void print18(int n){
   for(int i=0;i<n;i++){
       for(char ch='E'-i;ch<='E';ch++){
           cout<<ch;
       }
       cout<<endl;
   } 
   
}
void print19(int n){
    //For first half
    int initial_space=0;
    for(int i=0;i<n;i++){
        //star
        for(int j=1;j<=n-i;j++){
            cout<<"*";
        }
        //space
        for(int j=0;j<initial_space;j++){
            cout<<" ";
        }
        //star
        for(int j=1;j<=n-i;j++){
            cout<<"*";
        }
        initial_space+=2;
        cout<<endl;
    }
    //For second half-similar pattern 
    initial_space=2*n-2;
    for(int i=1;i<=n;i++){
        //star
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        //space
        for(int j=0;j<initial_space;j++){
            cout<<" ";
        }
        //star
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        initial_space-=2;
        cout<<endl;
    }
}

int main(){
    int n;
    cin>>n;
    // print7(n);
    // print8(n); 
    //print12(n);
}

