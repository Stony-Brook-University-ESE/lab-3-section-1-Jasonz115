#include <iostream>
#include <string>
using namespace std;

struct song{

    string name;
    string author;
    int year;
    song* next;

    song(string n, string a, int y) : name(n), author(a), year(y), next(nullptr) {}
};

class songlist{

private:
    song* head;


 public:
    songlist() : head(nullptr) {}
    ~songlist();
    void addsong(string name, string author, int year);
    void removesong(string name);
    void displaysongs() const;
};

songlist::~songlist() {
    while (head) {
        song* temp = head;
        head = head->next;
        delete temp;
    }
};

void songlist::addsonglist(string name, string author, int year){
song* newsong = new song(name, author, year);

if (head == NULL) {
        head = p;
        p->next = NULL;
    }
    else {
        if (p->title < head->title) { // if new title is less than the current head
            p->next = head;
            head = p;
    }
    else {
        for (p1 = head, p2 = p1->next; p2 != NULL && p->title >= p2->title; p1 =
            p2, p2 = p2->next) ; // search stops at the first node with a title
    // greater than the current song or the last
    // node of the list
            p1->next = p;
            p->next = p2;
        }
    }
};

void removesonglist(string name)
    song* current = head;

    if (head == NULL) { // empty list
            cout << “Warning: list is empty << endl;
        }
        else {
            if (title == head->title) { // if new title is less than the current head
                p = head;
                head = head->next;
                delete p;
        }
        else {
            for (p1 = head, p2 = p1->next; p2 != NULL && title > p2->title; p1 = p2,
                p2 = p2->next) ; // search stops at the first node with a title
        // greater than the current song or the last
        // node of the list
            if (p2 != NULL && title == p2->title) {
                p1->next = p2->next;
                delete p2;
        }
        else
            cout << “Warning: the title is not in the list” << endl;
        }
        

}

int main() {
    songlist songs;
    string name, author;
    int year;
    
    cout << "Enter song details (name, author, year). Enter an empty name to stop." << endl;
    while (true) {
        cout << "Enter song name: ";
        getline(cin, name);
        if (name.empty()) break;
        
        cout << "Enter author: ";
        getline(cin, author);
        
        cout << "Enter release year: ";
        cin >> year;
        cin.ignore();
        
    }

    cout << "\nsongs in alphabetical order:" << endl;
    songs.displaySongs();

    cout << "\nsongs in increasing order of release year:" << endl;
    songs.displaySongsByYear();
    
    cout << "\nenter three songs to remove:" << endl;
    for (int i = 0; i < 3; i++) {
        cout << "Enter song name: ";
        getline(cin, name);
        songs.removeSong(name);
    }

    cout << "\nremaining songs:" << endl;
    songs.displaySongs();
    
    return 0;
}





