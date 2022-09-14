// What this does is basically an instriuction to put a file, like a copy of thie file
#include "iostream"
// demo2.C - Sample C++ program 

// this is bad practice just do th :: like we have below
// using namespace std;
int main(void) 
{
    // does not create a new line (flush)
    // std::cout << "Starting Program.." << std::flush;

    // endl just begins a new line so if we were to add more stuff it would be under
    std::cout << "Hello! This is a C++ program.\n" << std::endl;

    std::cout << "Look at more text" << std::endl;

    std::cout << "Apples " << "Berry " << "Orange " << std::endl;

    int num1 = 6;
    int num2 = 1;

// prints out the number
    std::cout << "adding " << num1 << " + " << num2 << " = " << num1 + num2 << std::endl;
    return 0;
}