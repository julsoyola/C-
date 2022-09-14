// Iteravly 

bool checkPalindrome(string s)
{
    int start = 0;
    // since an array is 0 - size -1 u should - 1 here for the end because
    // if u just do .size() u get an empty char
    int end = s.size() - 1;

    // check to see if it is 1 or less , empty strings are also palindromes
    if (end <= 1 ) return true;
   
    for (int i = 0; i < s.size(); i++)
    {
        if (s[start] == s[end])
        {
            start++;
            end--;
        }
        else 
            return false;
    }
    
    
    
    return true;
}

// recursivly 

bool checkPalindrome(string s) {
    if (s.length() < 2) {
        return true; 
    }
    else if (s.at(0) == s.at(s.length() - 1)) {
        // if first and last charachter match, recursively call function on substring
        return checkPalindrome(s.substr(1, s.length() - 2));
    }
    else {
        return false; 
    }
}
