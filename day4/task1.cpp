#include <iostream>
#include <fstream>
#include <string>

int main() {
    std::string names[] = {"arsen", "arman"};
    
    std::ofstream outputFile("example.txt");
    if (!outputFile) {
        std::cerr << "Error: Unable to open the file." << std::endl;
        return 1; 
    }
   
    for (const auto& name : names) {
        outputFile << name << std::endl;
    }

    outputFile.close();

    std::ifstream inputFile("example.txt");
    if (!inputFile) {
        std::cerr << "Error: Unable to open the file." << std::endl;
        return 1; 
    }

    std::string line;
    std::cout << "Contents of the file:" << std::endl;
    while (std::getline(inputFile, line)) {
        std::cout << line << std::endl;
    }

    return 0; 
}