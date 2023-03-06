#include <iostream>
#include <thread>

#include "test.hpp"


int main()
{
    std::thread f(helloWorld, 4);
    f.join();
}
