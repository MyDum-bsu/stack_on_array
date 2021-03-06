#include <iostream>
#include "stack_on_array.h"

int main() {
    stack_on_array<int> stack;
    stack.push(2);
    stack.push(5);
    stack.push(7);
    stack << 6436273;
    stack.print(std::cout);
    std::cout << std::endl;
    std::cout << stack.head() << std::endl;
    std::cout << stack.getCounter() << std::endl;
    std::cout << stack.isEmpty();
    stack_on_array<int> kez;
    kez = stack;
    std::cout << std::endl;
    kez.print(std::cout);
    int a;
    std::cout << std::endl;
    while (!kez.isEmpty()) {
        kez >> a;
        std::cout << "A is " << a << std::endl;
    }
    std::cout << kez[1];
    return 0;
}
