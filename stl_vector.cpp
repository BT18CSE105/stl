#include<bits/stdc++.h>
using namespace std;    
int main(){
    vector<int> v = {1,2,3,4,5}; // initialization of vector
    v.push_back(6);//SLOWER OPERATION
    v.emplace_back(7); // FASTER OPERATION
    vector<pair<int,int>> vec; // vector of pairs
    vec.push_back({1,2});
    vec.push_back({3,4});
    for(int i = 0; i < v.size();i++){
        cout<<v.at(i)<<" ";
        // cout<<v[i]<<" ";
        cout<<endl;
        
    }
    for( int i = 0; i < vec.size(); i++){
        cout<<"<"<<vec[i].first<<" "<<vec[i].second<<">"<<endl;
    }
    vector<int> a(5,100); // vector of size 5 with all values as 100
    vector<int> b(a); // copy of vector a
    vector<int> c(6); // vector of size 6 with all values as 0
    cout<<v[0]<<endl; // accessing first element
    cout<<v.front()<<endl; // accessing first element
    cout<<v.at(0)<<endl; // accessing first element
    for(auto it = v.begin(); it != v.end(); it++){ // iterator to traverse the vector
        cout<<*it<<" ";
    }
    cout<<endl;
    vector<int>:: iterator it = v.begin();// iterator declaration at beginning
    cout<<*(it)<<endl; // dereferencing iterator
    cout<<*(v.end() - 1)<<endl; // last element
    // v.end() points to next of last element not the Last element
    for(auto it: v){ // range based for loop
        cout<<it<<" "; // range based for loop acts like normal for loop
    }
    vector<int> v1(v); // copy of vector v
    v1.erase(v.begin() + 2); // erase element at index 2
    cout<<endl; 
    for(auto it : v1){
        cout<<it<<" ";
    }
    vector<int> v2(v);

    v2.erase(v.begin() + 1, v.begin() + 4); // erase elements from index 1 to 3 ---> [1,4)
        for(auto it : v2){
        cout<<it<<" ";
    }
    cout<<endl;
    vector<int> v3;
    v3.insert(v3.begin(), 5); // insert 5 at the beginning
    v3.insert(v3.begin() + 1, 10); // insert 10 at index 1
    v3.insert(v3.end(), 15); // insert 15 at the end
    v3.insert(v3.end(), 2, 20); // insert two 20s at the end
}