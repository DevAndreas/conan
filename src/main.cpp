#include <iostream>
#include <string>
#include "hello.h"

int main()
{
    std::string s("Hello, World");
    std::cout << hello(s) << std::endl;
    return(0);
}