#include <iostream>
#include <fstream>
#include <string>
#include <vector>

int main() {
    std::vector<std::string> names = {"arsen", "arman"};
    std::ofstream outputFile("example.txt");

    if (!outputFile) {
        std::cerr << "Error: Unable to open file" << std::endl;
        return 1;
    }

    for (int i = 0; i < names.size(); i++) {
        outputFile << names[i] << std::endl;
    }
    // for (const auto&name : names) {
    //     outputFile << name << std::endl;
    // }

    outputFile.close();

    std::ifstream inputFile("example.txt");
    if (!inputFile)
    {
       std::cerr << "Error: unable to open file" << std::endl;
       return 1;
    }

    std::string line;
    while (std::getline(inputFile, line))
    {
        std::cout << line << std::endl;
    }
    
    return 0;
}