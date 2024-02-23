#include <iostream> 

int add_ (int a, int b) {
    return a + b;
}

int sub_ (int a, int b) {
    return a - b;
}

int mul_ (int a, int b) {
    return a * b;
}

int div_ (int a, int b) {
    return a / b;
}
int main () {

    std::cin>> a;
    std::cin>> b;

    int add = add_(a,b);
    int sub = sub_(a,b);
    int mul = mul_(a,b);
    int div = div_(a,b);


    std::cout << "add is " << add << std::endl;
    std::cout << "sub is " << sub << std::endl;
    std::cout << "mul is " << mul << std::endl;
    std::cout << "div is " << div << std::endl;

    return 0;
}