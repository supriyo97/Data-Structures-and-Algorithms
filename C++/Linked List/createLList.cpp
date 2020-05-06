#include <iostream>

#define ARRAYLEN(ar) (sizeof(ar)/sizeof(ar[0]))

class Node{
    public:
    int value;
    Node *next;
};

class LinkedList:public Node{  
    public:
        Node *head,*tail,*tempNode;
        LinkedList(){
            head = NULL;
            tail = NULL;
            tempNode = NULL;
        }
        void addNode(int value);
        void insertNode(int pos,int value);
        void deleteNode(int value);
        void displayList(Node* t);
};

void LinkedList::addNode(int value){
    Node *newNode = new Node;
    newNode->value = value;
    if(head==NULL){
        newNode->next = NULL;
        head = tail = newNode;
    }
    else{
        tail->next = newNode;
        tail = newNode;
        // newNode->next = head;
        // head = newNode;
    }

}

void LinkedList::displayList(Node* t){
    // tempNode = head;
    // while(tempNode){
    //     std::cout<<tempNode->value<<"->";
    //     tempNode = tempNode->next;
    // }
    if(t){
        std::cout<<t->value<<"->";
        displayList(t->next);
        std::cout<<t->value<<"<-";
    }

}

int main(){
    int a[] {23,53,21,35,2};
    // Node a;
    LinkedList ll;
    for(auto i:a){
        ll.addNode(i);
    }
    ll.displayList(ll.head);
    std::cout<<std::endl;
}