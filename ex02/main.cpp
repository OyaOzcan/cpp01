#include <iostream>

int main()
{
    std::string string = "HI THIS IS BRAIN";
    std::string *stringPtr = &string;
    std::string &stringRef = string;

    std::cout << &string << std::endl;
    std::cout << stringPtr << std::endl;
    std::cout << &stringRef << std::endl;
    std::cout << stringRef << std::endl;
        std::string newstring = "yeni";
     *stringPtr = &newstring;
    std::cout << &stringRef << std::endl;
    std::cout << stringRef << std::endl;

    std::cout << string << std::endl;
    std::cout << *stringPtr << std::endl;
    std::cout << stringRef << std::endl;

}
