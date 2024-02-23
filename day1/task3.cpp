#include <iostream> 

int main () {

    // Task 3. Control Structures
    int number = 0;
    char grade = 'E';
    std::cin >> number;
    
    if (number > 0) std::cout << number << " is postive" << std::endl;
    else if (number < 0) std::cout << number << " is negative" << std::endl;
    else std::cout << number << " is zero" << std::endl; 

    switch (number)
    {
    case 90 ... 100:
        grade = 'A';
        break;
    case 80 ... 89:
        grade = 'B';
        break;
    case 70 ... 79:
        grade = 'C';
        break;
    case 60 ... 69:
        grade = 'D';
        break;
    }
    std::cout << "your grade is : "<< grade << std::endl;

    for (int i = 1; i <= 10; i++) {
        std::cout << i;
    }
    std::cout<<std::endl;

    return 0;
}