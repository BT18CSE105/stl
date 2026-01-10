#include<bits/stdc++.h>
using namespace std;
int main(){
    priority_queue<int> p;
    p.push(5);
    p.push(1);  
    p.push(10);
    p.push(30);
    cout<<"Size of priority queue: "<<p.size()<<endl;
    cout<<"Top element: "<<p.top()<<endl; // maximum element
    // for(auto it : p){
    //     cout<<*it<<" "; // cannot traverse priority queue like this
    // }
    p.push(15);
    cout<<"Top element after pushing 15: "<<p.top()<<endl;
    while(!p.empty()){
        cout<<p.top()<<" "; // print and remove top element
        p.pop();    
    }
}