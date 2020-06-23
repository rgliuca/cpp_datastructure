#ifndef A1_P5_HPP
#define A1_P5_HPP

#include <string>
#include <vector>
#include <fstream>
#include <iostream>
using namespace std;

class Parser {
    public:
        Parser(string& line);
        const vector<string>& get_user_ids() const;
        const vector<string>& get_hashtags() const;
        bool is_empty() const;
    private:
        vector<string> user_ids;
        vector<string> hashtags;
        bool empty=true;
};

class Tags {
    public:
        const vector<string>& get_tags() const;
        void add_tags(const vector<string>& tags);
        friend ostream& operator<<(ostream& os, const Tags& t);
    private:
        vector<string> unique_tags;
};

#endif