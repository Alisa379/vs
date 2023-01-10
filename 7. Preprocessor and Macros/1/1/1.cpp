#include <iostream>
#define MODE 0
#ifndef MODE
#error difine MODE!
#endif
#if MODE==1
    int add(int a, int b) {
        return a + b;
    }
    int main() {
        int a, b;
        std::cout << "Input number 1: ";
        std::cin >> a;
        std::cout << "Input number 2: ";
        std::cin >> b;
        std::cout << "The result of the addition is " << add(a, b);
    }
#elif MODE==0
int main() {
    std::cout << "Working in workout mode";
}
#else
int main()  {
    std::cout << "Unknown mode. Shutdown";
}
#endif

