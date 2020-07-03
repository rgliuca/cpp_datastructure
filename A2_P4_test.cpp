#include "setops.hpp"
#include <iostream>
using namespace std;

int main() {
    set<string> s1,s2;
    s1.insert("apple");
    s1.insert("orange");
    s1.insert("lemon");
    s1.insert("grapes");
    s1.insert("passion fruit");
    s1.insert("plums");

    s2.insert("orange");
    s2.insert("pear");
    s2.insert("blueberry");
    s2.insert("lemon");
    s2.insert("plums");
    s2.insert("peach");


    set<string> s_intersect = s1 & s2;
    set<string> s_union = s1 | s2;
    set<string> s_diff = s1 - s2; 

    cout<<"Intersection of s1 and s2:" <<endl;
    for (auto &it : s_intersect) {
        cout<<it<<endl;
    }

    cout<<endl<<"Union of s1 and s2:" <<endl;
    for (auto &it : s_union) {
        cout<<it<<endl;
    }

    cout<<endl<<"Difference s1 - s2:" <<endl;
    for (auto& it : s_diff) {
        cout<<it<<endl;
    }
}