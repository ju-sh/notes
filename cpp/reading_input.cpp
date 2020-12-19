/*
Reference: https://en.cppreference.com/w/cpp/io/cin
           https://en.cppreference.com/w/cpp/string/basic_string/getline
Tried on: g++ 7.5.0
*/

#include<iostream>
#include<string>

int main() {
    std::string msg;

    std::getline(std::cin, msg);
    std::cout << msg << "\n";

    std::cin >> msg;    // only read till first white space
    std::cout << msg << "\n";
}

