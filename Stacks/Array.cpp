// Check Palindrome
// DAD reversed = DAD so yes
// DAA revered AAD not palindrome
#include <iostream>
#include <stack>
#include <string> 
using namespace std;

bool checkPalindrome(string s)
{
    stack<char> stk;
    int midIndex = s.length()/2;
    
    if(s.length() < 2)
        return true;
    
    for(int i = 0; i < s.length()/2; i++)
        stk.push(s.at(i));
        
    if(s.length() % 2 != 0)        
        midIndex += 1;            

    for(int i = midIndex; i < s.length(); i++)        
    {
        if(stk.top() != s.at(i))
            return false;
        stk.pop();
    }
    
    return true;
}

int main()
{
    string a;
    std::cin >> a;
    if(checkPalindrome(a))
        std::cout << "String "<< a <<" is palindrome!";
    else
        std::cout << "String "<< a <<" is not palindrome!";
}
