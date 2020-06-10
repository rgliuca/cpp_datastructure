#include <iostream>
#include <cstring>
using namespace std;

struct Element {
    char val;
    Element* next;
};

class List {
    public:
        List();
        ~List();
        void append(char c);
        void reverse();
        void print();
        void rotate_left(int pos);
        void rotate_right(int pos);
    private:
        Element* head_;
        int list_size_;
};

List::List() {
    head_=nullptr;
    list_size_=0;
}

List::~List() {
}

void List::print() {
    for (Element *p=head_; p!=nullptr; p=p->next) {
        cout<<p->val;
    }
    cout<<endl;
}

void List::rotate_left(int pos) {
}

void List::rotate_right(int pos) {
}

void List::reverse() {
}

void List::append(char c) {
}

int main(int argc, char* argv[]) {
    List l;
    if (argc==2) {
        //cout<<argv[1]<<endl;
        for (int i=0; i<strlen(argv[1]); i++) {
            //cout<<argv[1][i]<<endl;
            l.append(argv[1][i]);
        }
        cout<<"After append:"<<endl;
        l.print();
        l.reverse();
        cout<<"After reverse:"<<endl;
        l.print();
        l.rotate_left(2);
        cout<<"Rotate left by 2 chars:"<<endl;
        l.print();
        l.rotate_right(4);
        cout<<"Rotate right by 4 chars:"<<endl;
        l.print();
    } else {
        cout<<"Usage: a.exe string"<<endl;
    }
}
