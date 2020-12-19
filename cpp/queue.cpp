/*
Reference: https://en.cppreference.com/w/cpp/container/queue
Tried on: g++ 7.5.0

Pros:
Easy insertion at back.
Easy deletion at front.
Easy access front/back.

Cons:
Printing not easy.
No easy initialization from array (NOT SURE)
*/

#include<iostream>
#include<queue>

int main() {
    std::queue<int> intq;

    // Push
    intq.push(60);
    intq.push(70);
    intq.push(80);
    std::cout << "Size: " << intq.size() << "\n";
    std::cout << "Front: " << intq.front() << "\n";
    std::cout << "Back: " << intq.back() << "\n";

    // Pop
    intq.pop();
    std::cout << "Front: " << intq.front() << "\n";
}
