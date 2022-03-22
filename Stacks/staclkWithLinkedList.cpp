#include <bits/stdc++.h>
using namespace std;

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

class Stack
{
private:
    Node *top;

public:
    Stack()
    {
        top = NULL;
    }
    void push(int data)
    {
        Node *n = new Node(data);
        if (top == NULL)
        {
            top = n;
        }
        else
        {
            n->next = top;
            top = n;
        }
    }
    int pop()
    {
        if (top == NULL)
        {
            return -1;
        }
        else
        {
            int tempData = top->data;
            Node *temp = top;
            top = top->next;
            delete temp;
            return tempData;
        }
    }
    void display()
    {
        Node *temp;

        // Check for stack underflow
        if (top == NULL)
        {
            cout << "\nStack Underflow";
            exit(1);
        }
        else
        {
            temp = top;
            while (temp != NULL)
            {

                // Print node data
                cout << temp->data << " " ;

                // Assign temp link to temp
                temp = temp->next;
            }
        }
    }
};
int main()
{
    Stack s1;
    s1.push(1);
    s1.push(2);
    s1.push(3);
    s1.push(4);
    s1.display();
    cout << endl;
    s1.pop();
    s1.display();
    return 0;
}