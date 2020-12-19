/*
Reference: https://en.cppreference.com/w/cpp/container/list
Tried on: g++ 7.5.0

LIke a singly linked list.

Pros:
Easy insertion/deletion at front/back.
Sorting possible.

Cons:
No random access. Got to iterate to access required indices.
*/


#include<iostream>
#include<list>

void print_list(std::list<int> lst) {
    std::cout << "List is:";
    for(auto elem: lst) {
        std::cout << elem <<",";
    }
    std::cout << "\n";
}

int main() {
    std::list<int> intlist = {1, 2};
    print_list(intlist); 

    // Insert at the end of the list
    intlist.push_back(3);
    print_list(intlist); 

    // Insert at the begining
    intlist.push_front(0);
    print_list(intlist); 

    std::cout << "Current size: " << intlist.size() << "\n";
    //std::cout << "Max size: " << intlist.max_size() << "\n";
    std::cout << "First elem (font): " << intlist.front() << "\n";
    std::cout << "Last elem (back): " << intlist.back() << "\n";

    // Accessing elements
    std::list<int>::iterator itr = intlist.begin(); // iterator from beginning
                                                    // of list

    std::advance(itr, 2); // advance iterator by two positions
    std::cout << *itr << "\n";

    ++itr; // advance itertor by 1
    std::cout << *itr << "\n";
    print_list(intlist); 

    // Modifying elements
    *itr = 33;
    print_list(intlist); 

    ++itr;
    *itr = 4; // No effect. Outside the list now. Iteration over.
    print_list(intlist); 

    //Remove next to the last element
    //std::list<int>::reverse_iterator ritr = intlist.rend();
    itr = intlist.begin();
    itr++; // Now points to next to the last element
    intlist.erase(itr); // Remove 1 from index 1
    print_list(intlist); 

    // Reverse list inplace
    intlist.reverse();
    print_list(intlist); 
}
