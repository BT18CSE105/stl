#include<bits/stdc++.h>
using namespace std;
int main(){
    unordered_map<int,int> m;
    // unordered_map is used because:
// - Average O(1) time for insert and find
// - Order of keys is not required for Two Sum
// - Only existence and frequency checks are needed

// map would be:
// - O(log n) per insert/find
// - Maintaining sorted order that is never used here

    m.insert({1,100});
    m[2] = 200; // another way to insert key-value pair
    m[3] = 300;
    cout<<"Size of unordered_map: "<<m.size()<<endl;
    cout<<"Elements in unordered_map: "<<endl;
    for(auto it : m){
        cout<<it.first<<" "<<it.second<<endl;
    }
    m.erase(2); // remove key 2
    cout<<"Elements in unordered_map after erasing key 2: "<<endl;
    for(auto it : m){
        cout<<it.first<<" "<<it.second<<endl;
    }   
    m.find(3); // find key 3
    if(m.find(3) != m.end()){
        cout<<"Key 3 found with value: "<<m[3]<<endl;   
    }else{
        cout<<"Key 3 not found"<<endl;  
    }
}