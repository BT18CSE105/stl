#include<bits/stdc++.h>
using namespace std;
int main(){
    set<int> s;
    s.insert(5);   
    s.insert(5); // duplicate, will be ignored
    s.insert(1);
    s.insert(10);
    s.insert(30);
    cout<<"Size of set: "<<s.size()<<endl;
    cout<<"Elements in set: ";
    for(auto it : s){
        cout<<it<<" ";
    }   
    
}