#include <iostream>

// Encapsulate Node: Better Design

template <typename Object>
// two ways illustrated below
// 1) using a struct 
// struct Node
// {
//   Object data;
//   Node *next;
// };
// or 
// class Node
// {
//   private:
//     Node *next;
//     Object data; 
// };

// here we break it up from Node and List
template <typename Object>
class List
{
// we dont want users to access this, so they dont mess w the structure
  private:
    int size;
    Node<Object> *head;
    Node<Object> *tail;

// they can add values
  public:
    List()
    {
      size = 0;
      head = new Node;
      tail = new Node;
      head->next = tail;
    }
    void push_front(Object);

    void List::psuh_front(Object x)
{
  Node*q = new Node;
  q->data = x;
  q->next = head->next;
  head->next = q;
}
}