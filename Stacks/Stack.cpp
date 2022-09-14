// Problem Statement
// Write a method bool inLanguage(char* theString) that uses one stack to determine whether theString has the same number of A's as B's.  If the string contains anything other than A or B (capital A or capital B), return false. You are allowed to use the Stack from C++ STL Library and you do not need to implement your own Stack


#include <iostream>
#include <string.h>
#include <stack>
using namespace std;

// Iterative 
// bool inLanguage(char* theString)
// {
//     // counter for A and B
//     int countA = 0;
//     int countB = 0;
//     int strLen = strlen(theString);
//     // add each letter to a stack
//     stack<char> Stack;
    
//     for (int i = 0; i < strLen; i++)
//     {
//         if (theString[i] == 'A') countA++;
//         else
//             countB++;
//     }
//     if (countA == countB) return true;
//     else
//         return false;
    
// }

// using the stack 
using namespace std;
bool inLanguage(char* theString)
{
    //counter for A and B
    int countA = 0;
    int countB = 0;
    int strLen = strlen(theString);
    // add each letter to a stack
    stack<char> Stack;

  for (int i = 0; i < strLen; i++)
    {
      // pop each letter to stack
      Stack.push(theString[i]);
    }
    while (!Stack.empty())
      {
        char letter = Stack.top();
        // now pop it, get rid of it
        Stack.pop();
        if (letter == 'A') countA++;
        else 
          countB++;
      }
    if (countB == countA) return true;
    
    return false;
}
}