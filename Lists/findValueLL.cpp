Search in List
Problem Statement
Write a function find(Node* node, int valueInput) that starts at the given node and returns the index of the node with the value valueInput.  Indices start at 0.  Return -1 if valueInput does not exist.

#include <iostream>

class Node {
    public:
        int value;
        Node* next = NULL;
};

int find(Node* node, int valueInput)
{
    // we have a list, node and value
    // find valueInput
    int index = 0;
    
    
    while (node != NULL)
    {
        if (node->value == valueInput)
        {
            return index;
        }
        index++;
        node = node->next;
        
    }
    return -1;
}