#include <iostream>
#include <list>

using namespace std;

class Node {
    public:
        int value;
        Node* next = NULL;
};

float median(Node* head)
{
    // find how many numbers there are 
    int count = 0;
    float med = 0;
    float num1,num2;
    
    // add Node values into a list
    list<int> list1;
    // Initialize iterator to list
    list<int>::iterator it = list1.begin();
    // Initialize iterator to list
    list<int>::iterator it1 = list1.begin();
    
    while (head != NULL)
    {
        // insert values into list index,value
        int num = head->value;
        list1.push_front(num);
   
        count++;
     
        head = head->next;
    }
     // it is even
    if (count % 2 == 0)
    {
        int mid = count/2;
        advance(it,mid);
        num1 =  *it;
        
        cout << "mid index = " << mid << "num = " << num1 << endl;
        int mid2 = (count/2) + 1;
        advance(it1,mid2);
        num2 =  *it1;
        
         cout << "mid index = " << mid2 << "num = " << num2 << endl;
        med = (num1 + num2)/2;
    }
    else
    {
        // half
        int half = (count/2) + 1;
        advance(it,half);
        med =  *it;
    }
    
    
  
    
    return med;
    
}