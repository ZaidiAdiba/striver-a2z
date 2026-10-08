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
}
int main(){
    explainpair();
    explainVectors();
}


