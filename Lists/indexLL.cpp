Write a function add(Node* head, int index, int value) to add a node to a linked list.  The head of the linked list is input, as well as the index where the node should be added and the value associated with the node.  The program returns the head of the updated list.  If the index of insertion is greater than the size of the list, the program should return NULL.


  #include <iostream>

class Node {
    public:
        int value;
        Node* next = NULL;
};

Node* add(Node* head, int index, int valueInput)
{
    /* current node */
    Node* cur = head;

    /* initialize new node to be inserted at given index */
    Node* nth = new Node;
    nth->value = valueInput;
    nth->next = NULL;

    if(index == 0){
        /* insert new node at head */
        head = nth;
        head->next = cur;
        return head;
    }else{
        /* traverse list */
        int count = 0;            
        Node* pre = new Node;

        while(count != index){
            if(cur == NULL){ // if givent index is out of range
                return NULL;
            }
            if(count == (index - 1)){
                pre = cur;
            }
            cur = cur->next;            
            count++;
        }

        /* insert new node here */
        pre->next = nth;
        nth->next = cur;

        return head;
    }    
}