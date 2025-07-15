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
    cout<<endl;
    //{2,14}
    
    
    //Insert function
    //v1={2,14}
    v1.insert(v1.begin(),33);
    v1.insert(v1.begin()+1,2,10);
    cout<<"After Entering with insert function:"<<endl;
    for(auto it:v1){
        cout<<it<<" ";
    }
    //{33,10,10,2,14}
    
    //Size funtion-returns the size of the vector
    cout<<"The size of v1 is:"<<v1.size()<<endl; //5
    
    //Pop back-removes the last element
    v1.pop_back(); //{33,10,10,2}
    
    //Swap-swaps the 2 vectors
    v1.swap(v2);
    for(auto it:v2){
        cout<<it<<" ";
    }
    cout<<endl;
    
    //clear-clears all the content inside it
    v1.clear();
    
    //empty-returns a boolean 0 if empty and 1 if not empty
    cout<<"The value of empty is:"<<v1.empty();
}

//3.list
void explainList(){
    list<int>ls;
    ls.push_back(2);
    ls.emplace_back(3);
    
    ls.push_front(4);
    ls.emplace_front(5);
    
    for(auto it:ls){
        cout<<it<<" ";
    }
    //all the functions same as vector
    //Vector works on singly linked list 
    //List works on doubly linked list
    
    //Only difference from vector is that it allows front operations because it is doubly linked list
}
//4.Deque
//stands for double ended queue where the insertions are done by both front and back
void explaindeque(){
    deque<int>dq;
    dq.push_back(1);//{1}
    dq.emplace_back(3);//{1,3}
    dq.push_front(5);//{5,1,3}
    dq.emplace_front(2);//{2,5,1,3}
    
    dq.pop_back();//{2,5,1}
    dq.pop_front();//{5,1}
    
    cout<<dq.front()<<endl;//{5}
    cout<<dq.back()<<endl;//{1}
    
    for(auto it:dq){
        cout<<it<<" "; //{5,1}
    }
    cout<<endl;
}

//5.Stack
//Stack works on First in first out principle
void explainStack(){
    stack<int>st;
    st.push(2);
    st.push(34);
    st.push(45);
    st.emplace(23);
    
    //top() returns the top most element in the stack
    cout<<st.top()<<endl; //23
    
    //pop() pops out the top most element in the stack
    st.pop();//23
    cout<<st.top()<<endl; //45
    
    cout<<st.size()<<endl;//3
}

//6.Queue
void explainQueue(){
    queue<int>q;
    q.push(100);
    q.push(122);
    q.emplace(123);
    
    q.pop();//removes 100 the first element
    q.back()+=10;//123+10=133
    
    cout<<"front element is: "<<q.front()<<endl;//122
    cout<<"back element is: "<<q.back()<<endl;//123
    
}

//7.Priority Queue
//the largest element is stored at the top-MAX heap
//internally it maintains a tree data structure
void explainPQ(){
    priority_queue<int>pq;
    pq.push(5);
    pq.push(400);
    pq.push(6);
    pq.emplace(34);//{400,34,6,5}
        
    cout<<pq.top()<<endl;//400
    pq.pop();//{34,6,5}
    
    //size swap empty same as other functions
    
//Minimum heap-the smallest element will be out first!
priority_queue<int,vector<int>,greater<int>>pq1;
pq1.push(23);
pq1.push(234);
pq1.push(3);
pq1.emplace(4);

cout<<pq1.top();//3
}

int main() {
    // explainPairs();
    //explainVector();
    // explainList();
    // explaindeque();
    // explainStack();
    // explainQueue();
    // explainPQ();
    return 0;
}
