#include "A1_P5.hpp"
using namespace std;

Parser::Parser(string& line) {
}

const vector<string>& Parser::get_user_ids() const {
    return user_ids;
}

const vector<string>& Parser::get_hashtags() const {
    return hashtags;
}

bool Parser::is_empty() const {
    return empty;
}

ostream& operator<<(ostream& os, const Tags& t) {
}

const vector<string>& Tags::get_tags() const {
    return unique_tags;
}

void Tags::add_tags(const vector<string>& tags) {
}

int main(int argc, char** argv) {
/*  1. Create two different Tag objects, one for the hashtag and another 
        for the user_id
    2. read a line
    3. Create a new Parser object and let it parse the line for user_ids and
        hashtags, store these hashtags and user_id (duplicates acceptable)
        into two separate vectors 
    4. Add the user_ids and hashtag from the Parser to respective Tag objects
        Inside the Tag objects duplicate user_id and hashtags will be ignored.
    5. Print the # of tweets and the unique hashtags and user_ids
*/
    Tags user_ids, hashtags;
    int num_tweets=0;
    if (argc!=2) {
        cout<<"Usage: " << argv[0]<<"  tweet_text_file"<<endl;
        return EXIT_FAILURE;
    }
    ifstream infile(argv[1]);
    if (infile.is_open()) {
        string line;
        while (getline(infile, line)) {
            Parser line_parser(line);
            if (!line_parser.is_empty()) {
                user_ids.add_tags(line_parser.get_user_ids());
                hashtags.add_tags(line_parser.get_hashtags());
                num_tweets++; 
            }
        }
        infile.close();
        cout<<"1. Number of tweets="<<num_tweets<<endl;
        cout<<"2. Unique users"<<endl;
        cout<<user_ids;
        cout<<"3. Unique hashtags"<<endl;
        cout<<hashtags;
    }
}