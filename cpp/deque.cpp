/*
Reference: https://en.cppreference.com/w/cpp/container/deque
Tried on: g++ 7.5.0

Double ended queue.

Pros:
Easy insertion/deletion at front/back.
Supports indexing (random access).
Has all methods of queue (NOT SURE)
*/

#include<iostream>
#include<deque>

void print_dq(std::deque<int> dq) {
    std::cout << "Deque is: ";
    for(auto elem: dq) {
        std::cout << elem << ",";
    }
    std::cout << "\n";
}

int main() {
    std::deque<int> intdq = {10, 20, 30, 40, 50};
    print_dq(intdq);

    intdq.push_back(60);
    print_dq(intdq);

    intdq.push_front(5);
    print_dq(intdq);

    intdq.pop_front();
    print_dq(intdq);

    intdq.pop_back();
    print_dq(intdq);

    std::cout << "intdq[2]: " << intdq[2] << "\n";
}

