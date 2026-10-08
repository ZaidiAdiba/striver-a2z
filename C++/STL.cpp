//pairs
#include<bits/stdc++.h>
using namespace std;

void explainpair(){
    pair<int,int> p={1,3};
    cout<<p.first<<" "<<p.second<<"\n";
    // three items
    pair<int, pair<int,int>> q= {1,{2,3}};
    cout<<q.first<<" "<<q.second.first<<" "<<q.second.second<<"\n";
    // array
    pair<int,int> arr[] = {{1,2},{3,4},{4,5}};
    cout<<arr[1].second<<"\n";
}

void explainVectors(){
    cout<<"Vectors"<<"\n";
    vector<int> v; // creates empty container {}
    v.push_back(1); // add 1 {1}
    v.emplace_back(2); // add 2 {1,2}
    cout<<v[0]<<"\n";

    vector<int> ve(5,100); // creates 5 instances of 100 {100,100,100,100,100}
    vector<int> vec(5); // creates 5 instances of 0 or garbage value

    vector<pair<int,int>> vect;
    vect.push_back({1,2}); 
    vect.emplace_back(1,2); // automatically understands it is a pair
    cout<<vect[0]<<"\n";

    //Iterators
    vector<int>::iterator it = v.begin(); //points to first memory location
    it++; // moves by one
    cout<<*(it)<<"\n";
    vector<int>::iterator it = v.end(); // points to memory after last element
    vector<int>::iterator it = v.rend(); // points before first element
    vector<int>::iterator it = v.rbegin(); // points to last element memory if done it++ moves to second last element think as reversed 
    cout<<v[0]<<"\n";
    cout<<v.back()<<"\n"; // element at last

    // print all element using vectors and iterators
    for(vector<int>::iterator it = v.begin();it != v.end(); it++){
        cout<<*(it)<<" ";
    }

    // shotway we write auto - automatically assigns to same data type (int,string,vector iterator) according to the type of data used earlier
    for(auto it = v.begin();it != v.end();it++){
        cout<<*(it)<<"\n";
    }
     for (auto it:v){
        cout<<it<<"\n";
     }

     // Deletion
     v.erase(v.begin()+1); // delets one element
     // delete multiple element(begin,end)
     v.erase(v.begin()+2,v>begin()+4);

     // Insert function
     vector<int> v(2,100); //{100,100}
     v.insert(v.begin()+1,10); //{100,10,100}
     v.insert(v.begin()+2,2,5);//{100,10,5,5,100}

     // Insert vectornin another vector
     vector<int> copy(2,50); //{50,50}
     v.insert(v.begin(),copy.begin(),copy.end()); //{50,50,100,10,5,5,100} can add portion by giving address

     cout<<v.size(); // gives len 
     v.pop_back(); // delets last element
     v1.swap(v2); //swaps vectors
     v1.clear(); //clears entire vactor
     cout<<v1.empty(); // checks if empty
}

void explainLists(){
    list<int> ls;
    ls.push_back(1); //{1}
    ls.emplace_back(2); //{1,2}
    ls.push_front(3); // {3,1,2}
    ls.emplace_front(5); //{5,3,1,2}
    // rest operations same as vector like begin,end,rbegin,rend,swap,clear,insert,size
}

void deQue(){ // similar to list and vector
    deque<int> dq;
    dq.push_back(1);
    dq.emplace_back(3);
    dq.push_front(4);
    dq.emplace_front(5);

    dq.pop_back();
    dq.pop_front();
    dq.back();
    dq.front();
// rest function same as vectors 
}

void explainStack(){
    stack<int> st;
    st.push(1);
    st.push(2);
    st.emplace(3);
    cout<<st.top()<<"\n";
    st.pop();
    cout<<st.top()<<"\n";
    cout<<st.size()<<"\n";
    cout<<st.empty()<<"\n";
    stack<int> s1,s2; //swap
    s1.swap(s2);
}

int main(){
    //explainpair();
   // explainVectors();
    // explainLists();
    explainStack();
}


