/*
Reference: https://en.cppreference.com/w/cpp/container/set
Tried on: g++ 7.5.0

*/

#include<iostream>
#include<set>

void print_set(std::set<int> st) {
    std::cout << "Set is: ";
    for(auto elem: st) {
        std::cout << elem << ",";
    }
    std::cout << "\n";
}

int main() {
    std::set<int> intset = {10, 20, 30, 40, 50};
    print_set(intset);

    // Check if set is empty
    std::cout << intset.empty() << "\n";

    // Set size
    std::cout << intset.size() << "\n";
}
