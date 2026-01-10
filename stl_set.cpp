#include<bits/stdc++.h>
using namespace std;
int main(){
    set<int> s;
    s.insert(5);
    s.insert(1);
    s.insert(10);
    s.insert(30);
    cout<<"Size of set: "<<s.size()<<endl;
    cout<<"Elements in set: ";
    for(auto it : s){
        cout<<it<<" ";
    }
    s.erase(10); // remove element 10
    cout<<endl<<"Elements in set after erasing 10: ";
    for(auto it : s){
        cout<<it<<" ";
    }
    s.erase(s.find(5)); // remove element at iterator position
    cout<<endl<<"Elements in set after erasing element 5 using iterator: ";
    for(auto it : s){
        cout<<it<<" ";
    }
    s.insert(20);
    s.insert(15);   
    cout<<endl<<"Elements in set after inserting 20 and 15: ";
// RANGE-BASED FOR LOOP
// 'it' is the VALUE (compiler already dereferenced)
// Earlier mistake: tried '*it' → WRONG
for (auto it : s) {
    cout << it << " ";
}

// ITERATOR-BASED FOR LOOP
// 'it' is an ITERATOR → must dereference
// Rule: if begin() is used, '*' is compulsory
for (auto it = s.begin(); it != s.end(); ++it) {
    cout << *it << " ";
}

}

