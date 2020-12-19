/*
Reference: https://en.cppreference.com/w/cpp/container/vector
Tried on: g++ 7.5.0

Like an array.

Pros:
Supports indexing (random access)
Easy insertion or deletion at back.

Cons:
No sorting.
*/

#include<iostream>
#include<vector>

void print_vector(std::vector<int> vec) {
    std::cout << "Vector is: ";
    for(auto elem: vec) {
        std::cout << elem << ",";
    }
    std::cout << "\n";
}

int main() {
    std::vector<int> intvec = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    print_vector(intvec);

    //Size
    std::cout << "Size: " << intvec.size() << "\n";
    std::cout << "Capacity: " << intvec.capacity() << "\n";
    //std::cout << "Max size: " << intvec.max_size() << "\n";

    // Random access
    intvec[2] = 33;
    print_vector(intvec);
    std::cout << "intvec[1]: " << intvec[1] << "\n";
    std::cout << "intvec.at(1): " << intvec.at(1) << "\n";

    // Insert
    //std::vector<int>::const_iterator itr = intvec.cbegin();
    std::vector<int>::iterator itr = intvec.begin();
    intvec.insert(itr + 1, 132);
    print_vector(intvec);

    // Push back
    intvec.push_back(100);
    print_vector(intvec);

    // Pop back (pop_back() returns void)
    intvec.pop_back();
    print_vector(intvec);

    // Exchange (swap) contents of two vectors
    std::vector<int> othervec = {11, 22};
    othervec.swap(intvec);
    std::cout << "intvec:-";
    print_vector(intvec);
    std::cout << "othervec:-";
    print_vector(othervec);
}
