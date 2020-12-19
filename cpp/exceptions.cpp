/*
Reference: https://en.cppreference.com/w/cpp/error
Tried on: g++ 7.5.0
*/

#include<iostream>
#include<vector>

int divide(int a, int b) {
    if(b == 0) {
        throw std::runtime_error("Divide by zero!");
    }
    return a / b;
}

int main() {
    try {
        std::cout << divide(40, 0) << "\n";
    } catch(std::runtime_error &e) {
        std::cout << e.what() << "\n";
    }

    std::vector<int> vec = {1, 2};
    try {
        std::cout << vec.at(2) << "\n";
    } catch(std::out_of_range &e) {
        std::cout << e.what() << "\n";
    }
    std::cout << vec[2] << "\n";    // [] operator doesn't throw exception
                                    // but at() does
}
