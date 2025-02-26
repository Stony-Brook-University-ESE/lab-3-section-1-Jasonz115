#include <iostream>
#include <string>
using namespace std;

#include <iostream>
#include <string>
using namespace std;



class Node_temp {
private:
    tring title;
    string artist;
E searched;
friend class LinkedList_Temp < E >;
}


template < typename E >
class LinkedList_Temp {
public:
    LinkedList_Temp();
    ~LinkedList_Temp();
    void addToList (const E& e);
    void deletefromList();
    display_alphabetical();
    display_searched (const E& e);
private:
    Node_temp<E> *head;
}




int main() {
    string town;
    
    cout << "Enter song details (name, author, year). Enter an empty name to stop." << endl;
    while (true) {
        cout << "Enter town name: ";
        getline(cin, name);
        if (name.empty()) break;
        
    }

    
    return 0;
}





