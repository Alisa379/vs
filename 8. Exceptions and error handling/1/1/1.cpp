
#include <iostream>
#include <string>

int function(std::string str, int forbidden_length) {
    if (str.length() != forbidden_length) {
        return str.length();
    }
    int bad_length = str.length();
    throw bad_length;
}

int main()
{
    int length;
    std::string string;
    std::cout << "Input forbidden length: ";
    std::cin >> length;
    while (true)  {
        std::cout << "Input a word: ";
        std::cin >> string;
        try {
            int l = function(string, length);
            std::cout << "The length of word \"" << string << "\"" << " equels " << l << std::endl;
        }
        catch (int bad_length) {
            std::cout << "You inputted forbidden length word! Good bye";
            return 0;
        }
    }
    
}

