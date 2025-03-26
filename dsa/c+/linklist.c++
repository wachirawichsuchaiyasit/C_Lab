#include <iostream>
using namespace std;

class Node
{
public:
    int value;
    Node *next;
};

class LinkList : public Node
{
private:
    Node * head ;
public :
    LinkList() {
        head = nullptr ;
    };

    void addFirst(int value) {
        Node *newnode = new Node() ;
        newnode->value = value ;
        newnode->next = this->head ;

        this->head = newnode ;
    } 

    void addLast(int value) {
        Node *newnode = new Node() ;
        newnode->value = value ;
        newnode->next = nullptr ;

        if (this->head == nullptr) {
            this->head = newnode ;
            return ;
        }

        Node *temp = this->head ;
        while (temp->next != nullptr) {
            temp = temp->next ;
        }
        temp->next = newnode ;
    }

    void printList() {
        Node *temp = this->head ;
        while (temp != nullptr ) {
            cout << " value is : " << temp->value << " " << endl ;
            temp = temp->next ;
        }
    }
};

int main()
{
    LinkList list ;

    list.addLast(1);
    list.addLast(2);
    list.addLast(3);
    list.addFirst(6);
    
    list.printList() ;
    return 0;
}