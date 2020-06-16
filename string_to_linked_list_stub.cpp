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
        for (int i=0; i<strlen(argv[1]); i++) {
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
        cout<<"Remove pos: 0"<<endl;
        l.remove(0);
        l.print();
        cout<<"Remove pos: 5"<<endl;
        l.remove(5);
        l.print();
        cout<<"Remove pos: 7"<<endl;
        l.remove(7);
        l.print();
        cout<<"Insert pos: 0"<<endl;
        l.insert('X',0);
        l.print(); 
        cout<<"Insert pos: 5"<<endl;
        l.insert('Y',5);
        l.print(); 
        cout<<"Insert pos: 9"<<endl;
        l.insert('Z',9);
        l.print();
    } else {
        cout<<"Usage: a.exe string"<<endl;
    }

}
