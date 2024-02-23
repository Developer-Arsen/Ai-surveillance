#include <iostream> 

int add(int a, int b) {
    return a + b;
}

int sub(int a, int b) {
    return a - b;
}

int mul(int a, int b) {
    return a * b;
}

int divide(int a, int b) {
    return a / b;
}

int main () {
    int a = 0;
    int b = 0;

    std::cin >> a;
    std::cin >> b;

    int add_val = add(a,b);
    int sub_val = sub(a,b);
    int mul_val = mul(a,b);
    int div_val = divide(a,b);

    std::cout << "add is " << add_val << std::endl;
    std::cout << "sub is " << sub_val << std::endl;
    std::cout << "mul is " << mul_val << std::endl;
    std::cout << "div is " << div_val << std::endl;

    return 0;
}