/*
Reference: https://en.cppreference.com/w/cpp/string
Tried on: g++ 7.5.0
*/

#include<iostream>
#include<string>

int main() {
    std::basic_string<char> str = "hello";
    std::cout << str << "\n";

    // Char-by-char access
    std::cout << str[1] << "\n";
    std::cout << str.at(2) << "\n";

    // Length
    std::cout << str.length() << "\n";
    std::cout << str.size() << "\n";

    // Appending
    str += " wo";
    std::cout << str << "\n";
    str.append("rld");
    std::cout << str << "\n";

    // String to int
    str = "234";
    std::cout << std::stoi(str) << "\n";

    // String to float
    str += ".5";
    std::cout << std::stof(str) << "\n";
}
