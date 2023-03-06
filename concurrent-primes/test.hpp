#pragma once
#include <iostream>

void helloWorld(unsigned iterations) {
    for (size_t i{}; i < iterations; i++) {
        std::cout << "Hello World!" << std::endl;
    }
}
