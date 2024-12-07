#include <iostream>
#include <fstream>
#include <sstream>
#include <direct.h>


std::string get_data() {
    std::ifstream file("C:\\Users\\Sarah\\Documents\\GitHub\\advent-of-code\\advent-of-code-2024\\data\\day01.txt");
    if (!file.is_open()) {
        throw std::runtime_error("Could not open file");
    }

    std::stringstream data;
    data << file.rdbuf();

    return data.str();
}

int main() {
    
    std::cout << get_data();
    return 0;
}