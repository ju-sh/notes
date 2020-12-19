/*
Reference: https://en.cppreference.com/w/cpp/container/vector
Tried on: g++ 7.5.0
*/

#include<iostream>
#include<fstream>

int main() {
    int x, y;
    std::ifstream fin("input.txt");
    fin >> x >> y >> y;
    std::cout << x << ", " << y << "\n";
}


