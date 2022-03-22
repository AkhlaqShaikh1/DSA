/**
 * @file linkList.cpp
 * @author Akhlaq Ahmed Shaikh
 * @brief
 * @version 0.1
 * @date 2021-12-04
 *
 * @copyright Copyright (c) 2021
 *
 */

#include <bits/stdc++.h>
using namespace std;
/**
 * @brief A util class for keeping the track of nodes
 *
 */
class Node
{
public:
    int data;
    Node *next;

    Node(int data)
    {
        this->data = data;
        next = NULL;
    }
};
/**
 * @brief A class with all the functionalities of Linked List;
 *
 */
class LinkedList
{
private:
    Node *header;
    Node *tail;
    int size;

public:
    bool isEmpty()
    {
        if (header == NULL)
        {
            return true;
        }
        return false;
    }
    LinkedList()
    {
        header = NULL;
        tail = NULL;
        size = 0;
    }
    int getSize()
    {
        return size;
    }

    void append(int data)
    {
        // New Node
        Node *N = new Node(data);
        // Case 1: Empty List
        if (isEmpty()) 
        {
            header = N;
            tail = N;
        }

        // Case 2: List not Empty
        else
        {
            tail->next = N;
            tail = N;
        }
        // Increment Size
        size++;
    }

    // Add data to the front or beginning of the linked List;
    void prepend(int data)
    {
        Node *n = new Node(data);

        if (isEmpty())
        {
            header = n;
            tail = n;
        }
        else
        {
            Node *temp = header;
            header = n;
            n->next = temp;
        }

        size++;
    }

    void PrintLinkedList()
    {
        Node *temp = header;

        while (temp != NULL)
        {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
    void RemoveTopElement()
    {
        if (!isEmpty())
        {
            Node *temp = header;
            header = header->next;
            delete temp;
            size--;
        }
    }

    void RemoveLastElement()
    {
        // Linked List size is 1
        if (header->next == NULL)
        {
            RemoveTopElement();
        }
        // LinkedList size is greater than 1;
        else if (header != NULL)
        {
            // Temp pointers to keep track of previous and cuurent node
            Node *cur = header;
            Node *prev;
            // Looping through the LL to move the pointers to appropiate postion
            while (cur->next != NULL)
            {
                prev = cur;
                cur = cur->next;
            }
            // Setting tail to the last element before null
            tail = prev;
            prev->next = NULL;
            delete cur;
            size--;
        }
    }

    void RemoveAt(int pos)
    {
        // Check for valid Pos
        if (pos > size or pos < 1)
        {
            return;
        }
        // Check if pos is First Node
        else if (pos == 1)
        {
            RemoveTopElement();
        }
        else if (pos == size)
        {
            RemoveLastElement();
        }
        else if (!isEmpty())
        {
            Node *cur = header;
            Node *prev;
            for (int i = 1; i < pos; i++)
            {
                prev = cur;
                cur = cur->next;
            }
            prev->next = cur->next;
            delete cur;
            size--;
        }
    }
    void insertAt(int pos, int data){
        //Check for vaild pos
        if(pos> size+1 || pos < 1){
            return;
        }
        else if(pos == 1){
            prepend(data);
        }
        else if(pos == size+1){
            append(data);
        }
        else if(!isEmpty()){
            Node *n = new Node(data);
            Node *prev;
            Node *cur = header;
            for(int i=1; i < pos;i++){
                prev = cur;
                cur = cur->next;
            }
            prev -> next = n;
            n->next = cur;
            size++;
        }
         

    }
    ~LinkedList(){
        Node *next;
        while(header!=NULL){
            next = header-> next;
            delete header;
            header = next;
        }
    }
    
};

int main()
{
    LinkedList list;
    list.append(1);
    list.append(2);
    list.append(3);
    list.append(4);
    list.prepend(10);
    list.PrintLinkedList();
    list.RemoveAt(3);
    list.PrintLinkedList();
    // list.PrintLinkedList();
    // cout << list.getSize() << endl;
    // list.RemoveTopElement();
    // list.PrintLinkedList();
    // cout << list.getSize() << endl;
    // list.RemoveLastElement();
    // list.PrintLinkedList();
    // cout << list.getSize() << endl;
    // list.RemoveAt(2);
    // list.PrintLinkedList();
    // list.insertAt(2,5);
    // list.PrintLinkedList(); 
    return 0;
}