#include <map>
#include <set>
#include <iostream>
#include <sstream>
#include <string>
using namespace std;

int main() {
    // parsing example
    string line = "Tom Jones, EECS CS";
    istringstream ss(line);
    string token;


    string name;
    string majors;

    if (getline(ss, name, ',')) {
        cout<<name<<endl;
    }

    if (getline(ss,majors,',')) {
        cout<<majors<<endl;
    }

    // map example
    map<string, set<string>> fruits;

    set<string> s1;
    s1.insert("apple");
    fruits["fruit1"]=s1;
    fruits["fruit1"].insert("orange");
    fruits["fruit1"].insert("plum");
    
    set<string> s2;
    s2.insert("passion fruit");
    fruits["fruit2"]=s2;
    fruits["fruit2"].insert("peach");
    fruits["fruit2"].insert("grapes");

    for (auto &map_it:fruits) {
        cout<<"Set: "<<map_it.first<<endl;
        for (auto &set_it:map_it.second) {
            cout<<set_it<<endl;
        }
    }
}