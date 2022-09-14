#include "iostream"
#include <unordered_set>
#include <vector>
#include <cstring>
using namespace std;

// vector to return
vector<string> UniqueTitles(int m, int n, int t)
{
    string books[n][m];
    int numBooks = 0;

    // hash set to deal with duplicates
    unordered_set<string> bookSet;
    
    // get the repository as input
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            // get the whole title 
            getline(cin,books[i][j]);
            
            // make surw they're under length t characters
            int length = books[i][j].size();
            if (length < t)
            {
                // insert each book into the set
                bookSet.insert(books[i][j]);
            }
           
        }
    }
    // get size of set
    numBooks = bookSet.size();

    // to return
    vector<string> v(bookSet.begin(), bookSet.end());

    cout << "Unique size = " << numBooks << endl;

    return v;

}
// will be using a hashset to store the items from the 2d array to handle the duplicates
// more efficently 
int main (void)
{
    int n,m,t;
    vector<string> books;

    // for testing reasons
    n = 3;
    m = 3;
    t = 20;

    // storing for all books and return the new books
    books = UniqueTitles(m,n,t);

    // Testing purposes
    for (string x : books)
        cout << x << endl;
}