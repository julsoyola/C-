// Problem Statement
// You are given a queue of integers. Check if the queue is valid. A Valid queue is one in which the numbers are inserted in ascending order. ﻿The queue (5, 44, 333) is a Valid queue while the queue (5,44,33) is not.

// empty() – Returns whether the queue is empty
// size() – Returns the size of the queue
// push(g) – Adds the element ‘g’ at the end of the queue
// pop() – Deletes the first element of the queue
// front() – Returns a reference to the first element of the queue
// back() – Returns a reference to the last element of the queue


#include <queue>
#include <iostream>
#include <stack>
#include<string> 
using namespace std;

bool checkValidity(queue<int> q)
{
    if (q.size() <= 1) return true;
    // compare next two nums
    int num1, num2;
    num1 = q.front();
    q.pop();
    
    bool valid = true;
    while (!q.empty())
    {
        int num2 = q.front();
        q.pop();
        
        if (num1 > num2)
        {
           valid = false;
            break;
        }
       num1 = num2;
        
      }
     
    return valid;