#include <iostream>
#include <fstream>
#include <string>

int main() {
    std::ofstream outFile("sample_output.txt");
    if (outFile.is_open()) {
        outFile << "Writing structured data into file stream.\n";
        outFile << "C++ 3rd Semester Coursework verified.\n";
        outFile.close();
    }

    std::ifstream inFile("sample_output.txt");
    std::string line;
    std::cout << "Reading from file:\n";
    while (std::getline(inFile, line)) {
        std::cout << line << "\n";
    }
    inFile.close();
    return 0;
}
