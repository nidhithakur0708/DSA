// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;
    //Standard Template Library
    /*
    STL is divided into 4 parts
    1-Algorithms
    2-Containers
    3-Functions
    4-Iterators
    */
//1.Pairs
void explainPairs(){
    pair<int,int> p={1,3};
    cout<<p.first<<endl<<p.second<<endl;
    
    pair<int,pair<int,int>>p1={1,{3,4}};
    cout<<p1.first<<endl<<p1.second.second<<endl;
    
    pair<int,int>arr[]={{1,2},{2,5},{5,1}};
    cout<<arr[1].second;
}

//2.Vectors
/*Vectors are dynamic array that can expand with the requirement as arrays
*/
void explainVector(){
    vector<int>v;
    v.push_back(1);//{1}
    v.emplace_back(2);//{1,2}
    //Emplace back is compatively faster than push_back
    
    //You can also have pair datatype in vector
    vector<pair<int,int>> vec;
    vec.push_back({1,2});
    vec.emplace_back(3,4);
    //with () if assumes it to be a pair
    
    //Start a vector of size 5 with initial value of 100
    vector<int>v2(5,100);//{100,100,100,100,100}
    
    //Start a vector of size 5
    vector<int>v3(5);
    
    //Copy the v3 into some other vector
    vector<int>v4(v3);
    
    //Accessing the vectors,similar to arrat
    cout<<v2[1];
}


int main() {
    // explainPairs();
    explainVector();
    return 0;
}
