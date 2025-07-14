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
    //Initialize a vector 
    vector<int>v1;
    
    //push)back and emplace_back are used for inserting 
    //Emplace_back is faster than push_back
    v1.push_back(1);
    v1.push_back(2);
    v1.push_back(3);
    v1.push_back(4);
    v1.emplace_back(14);
    
    //Size declaration of array
    vector<int>v2(5,100);//size vector with all values 100
    vector<int>v3(5);//Size 5 vector with all garbage value
    
    //Vectors can also have pairs in them
    vector<pair<int,int>> v4;
    v4.push_back({14,15});
    v4.emplace_back(16,17);
    
    //Accessing array elements
    //Indexing starts with zero
    cout<<v1[3]<<endl;
    cout<<v1.at(2)<<endl;
    cout<<v4[1].first<<endl;
    cout<<v4[1].second<<endl;
    
    //Printing the vectors
    //Iterators points to the memory location and not to the element 
    //iterator starts from before of the first index
    vector<int>::iterator it=v1.begin();
    it++;
    cout<<"The first element of v1 is: "<<*(it)<<endl;
    
    //for loops to printing the vectors
    
    //auto is the keyword that accepts the data type according to the data that is present!
    cout<<"The v1 vector by for is:"<<endl;
    for(vector<int>::iterator it=v1.begin();it!=v1.end();it++){
        cout<<*(it)<<" ";
    }
    cout<<endl;
    
    //Shorter version using auto
    cout<<"The v4 vector by for is:"<<endl;
    for (auto it = v4.begin(); it != v4.end(); it++) {
        cout << it->first << " " << it->second << endl;
    }
    
    //Shortest version
    //here auto iterator means that it will accept the data type of the data present automatically!
    //Heence no need for * 
    for(auto it:v2){
        cout<<it<<" ";
    }
    cout<<endl;
    
    //Earse from vectors
    v1.erase(v1.begin());
    cout<<"After erasing first element: "<<endl;
    for(auto it:v1){
        cout<<it<<" ";
    }
    cout<<endl;
    
    //{2,3,4,14}
    // v.erase[start,end)-last element is not included
    v1.erase(v1.begin()+1,v1.begin()+3);
    cout<<"After erasing 2,3 element: "<<endl;
    for(auto it:v1){
        cout<<it<<" ";
    }
    //{2,14}
}


int main() {
    // explainPairs();
    explainVector();
    return 0;
}
