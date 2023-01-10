#include <iostream>
    
int main() {
    #define MODE 1
    #ifndef MODE
    #error difine MODE!
    #endif
    #if MODE==1
    #define add(a, b) (a+b)
    int a, b;
    std::cout << "Input number 1: ";
    std::cin >> a;
    std::cout << "Input number 2: ";
    std::cin >> b;
    std::cout << "The result of the addition is " << add(a, b);
    #elif MODE==0
    std::cout << "Working in workout mode";
    #else
    std::cout << "Unknown mode. Shutdown";
    #endif
}