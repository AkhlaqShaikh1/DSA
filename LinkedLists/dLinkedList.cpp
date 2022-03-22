#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node *prev;
    Node(int data)
    {
        this->data = data;
        next = NULL;
        prev = NULL;
    }
};

class DoubleLinkedList
{
private:
    Node *header;
    Node *tail;
    int size;

public:
   
    /*
    Constructors and destructors and Size of ll
    */

    DoubleLinkedList()
    {
        header = NULL;
        tail = NULL;
        size = 0;
    }
    ~DoubleLinkedList()
    {
        Node *next;
        while (header != NULL)
        {
            next = header->next;
            delete header;
            header = next;
        }
    }
    int getSize()
    {
        return size;
    }

    /*
        Printing Linked List
    */
    
    void PrintLinkedList()
    {
        Node *temp = header;

        while (temp!=NULL)
        {
            cout << temp->data << " ";
            temp = temp->next;

        }
        cout << endl;
    }
    void printInReverse(){
        Node *temp = tail;
        while(temp!=NULL){
            cout << temp->data  << " ";
            temp = temp->prev;
        }
        cout << endl;
    }

    /*
     * INSERTION IN LINKED LIST
     */
    void prepend(int data){
        Node *n = new Node(data);
        if(header!=NULL){
            header->prev = n;
            n->next = header;
            header = n;
            size++;
        }
        else{
            header = n;
            tail = n;
            size++;
        }
    }
    void append(int data){
        Node *n = new Node(data);
        if(header!=NULL){
            tail->next = n;
            n->prev = tail;
            tail = n;
            size++;
        }
        else{
            header = n;
            tail = n;
            size++;
        }
    }
    void insertAt(int pos,int data){
        //valid pos?
        if(pos < 1 || pos > size+1){
            return;
        }
        else if(pos == 1){
            prepend(data);
        }
        else if(pos == size+1){
            append(data);
        }
        else if(header!=NULL){
            Node *n = new Node(data);
            Node *cur = header; //for traversing in the array;
            for(int i=1; i < pos ;i++){
                cur = cur->next;
            }
            //pointer behind cur should be pointing to node
            //Eg: instet at 3 so cur= 3 cur.prev = 2 2.next point to newe Node 
            cur->prev->next = n;
            //3.prev = 2 == 2.prev 
            n-> prev = cur->prev;

            //Newe node next point to cur 
            n->next = cur;
            //cur prev point to N to complete the link
            cur-> prev = n;
            size++;
        }
    }

    /**
     * DELETION IN DOUBLE LINKED LIST
     */

    void removeTop(){
        if(header->next == NULL){
            delete header;
            header  = NULL;
            tail = NULL;
            size--;
        }
        else if(header!=NULL){
        header = header->next;
        delete header->prev;
        header->prev = NULL;
        size--;
        }
    }
    void removeLast(){
        if(header->next == NULL){
            delete header;
            header = NULL;
            tail = NULL;
            size--;
        }
        else if(header !=NULL){
            tail  = tail->prev;

            delete tail->next;
            tail->next = NULL;
            size--;
        }
    }
    void removeAt(int pos){
        //valid pos
        if(pos > size || pos < 1){
            return;
        }
        //is first
        else if(pos == 1){
            removeTop();
        }
        else if(pos == size){
            removeLast();
        }
        else if(header != NULL){
            Node *temp = header;
            for(int i=1; i < pos ;i++){
                temp = temp->next;
            }
            temp->prev->next = temp->next;
            temp->next->prev = temp->prev;
            delete temp;
            size--;
        }
    }
    
};

int main()
{
   cout << 1%2 << endl;
   
    // DoubleLinkedList list;
    // list.prepend(4);
    // list.prepend(3);
    // list.prepend(2);
    // list.prepend(1);
    // list.append(5);
    // list.PrintLinkedList();
    // list.removeAt(1);
    // list.removeAt(list.getSize());
    // list.removeAt(2);
    // list.PrintLinkedList();


    return 0;
}