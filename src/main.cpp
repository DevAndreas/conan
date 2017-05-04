#include <iostream>
#include <string>
#include "hello.h"
#include <boost/lambda/lambda.hpp>
#include <vector>
#include <algorithm>

using namespace boost::lambda;

int main()
{
//    std::vector<int> figures = {1,2,3,4,5};
//    std::for_each(std::begin(figures), std::end(figures), std::cout << (_1 * 3) << " " );

    std::string s("Hello, World!!");
    std::cout << hello(s) << std::endl;
    return(0);
}