#include <iostream>

int main() {
    int* myInt = new int();
    std::cout << "There should be a memory leak!" << std::endl;
    return 0;
}