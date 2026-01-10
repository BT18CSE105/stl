#include<bits/stdc++.h>
using namespace std;    
int main(){
    stack<int> s;
    s.push(1); // push element onto stack
    s.push(2);
    s.push(3);
    s.push(4);
    cout<<"Top element: "<<s.top()<<endl; // access top element
    s.pop(); // remove top element
    cout<<"Top element after pop: "<<s.top()<<endl;
    cout<<"Size of stack: "<<s.size()<<endl; // size of stack
    while(!s.empty()){ // check if stack is empty
        cout<<s.top()<<" "; // print top element
        s.pop(); // remove top element
    }
    s.emplace(5); // emplace element onto stack
    cout<<endl<<"Top element after emplace: "<<s.top()<<endl;
    // s.swap(stack<int>()); // clear stack by swapping with empty stack
    // cout<<"Is stack empty after clear? "<<s.empty()<<endl; // check if stack
}