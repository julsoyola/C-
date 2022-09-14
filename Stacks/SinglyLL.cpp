#include <iostream>
#include <vector>
#include <sstream>
using namespace std;

class Node {
    public:
        int data;
        Node* next;
        Node(int val) {data = val; next = nullptr;}
        Node(int val, Node* node) {data = val; next = node;}
};

class Stack_LL {
    private:
        // topPtr points to the top element of the stack
        Node *top;
    // private because it should always be the top being access 
    // in a stack 
    public:
        Stack_LL();
        ~Stack_LL();

        // creating the functions
        // public because we want the user to access these
        bool isEmpty() const;
        void push(int newItem);
        void pop();
        int peek() const;
};

Stack_LL::Stack_LL() {
    

}

Stack_LL::~Stack_LL() {


}

bool Stack_LL::isEmpty() const {
    if (top == NULL)
    {
        return true;
    }
    else
    {
        return false;
    }
}

void Stack_LL::push(int newItem) {
    // push a new item onto the stack
    // need to push as a node value so we can access that class
    Node* temp = new Node(newItem); // create new node
    
    temp->next = top;
    top = temp;
}

void Stack_LL::pop() {
// first check theres a node to pop
    if (top != NULL)
    {
        // remove top node
        Node *temp = top;
        top = top->next;
        delete temp;
    }
}
// does not delete the element
int Stack_LL::peek() const {
    // returns whats on top 
    if (top != NULL)
    {
     return top->data;   
    }
    else
        return -1;
}