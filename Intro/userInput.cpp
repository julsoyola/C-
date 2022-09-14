#include "iostream"

int main(void)
{
    std::string text  = "Hello my name is Juliana";

    std::cout << text << std::endl;

    std::cout << "what is your name? \nEnter here: " << std::flush;

    // Declare Empty String
    std::string name;

    // >> Extracting operator 
    std::cin >> name;

    std::cout << "\nHi " << name << std::endl;

    int age;
    std::cout << "How old are you?\n" << std::flush;
    std::cin >> age;

    std::cout << "HI " << name << " you are " << age << " years old." << std::endl;

    return 0;
}