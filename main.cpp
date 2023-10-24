#include <iostream>
#include "hello.h"
#include "rexbranch.h"

int main() {
    hello();
    int array[5]={1,2,3,4,5};
    displayArray(array, 5);
    for(int i = 0; i < 10; i++)
    {
        std::cout << i << '\n';
    }
    return 0;
}