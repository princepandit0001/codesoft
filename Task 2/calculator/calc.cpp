#include <iostream>

int main() {
    char op;
    float num1;
    float num2;

    std::cout<<"Enter 1st number\n: ";
    std::cin>> num1 ;
    std::cout << "Enter operator (+, -, *, /): ";
    std::cin >> op;
    std::cout<<"enter 2nd number\n: ";
    std::cin>> num2;


    switch(op) {
        case '+':
            std::cout << num1 << " + " << num2 << " = " << num1 + num2 << std::endl;
            break;

        case '-':
            std::cout << num1 << " - " << num2 << " = " << num1 - num2 << std::endl;
            break;

        case '*':
            std::cout << num1 << " * " << num2 << " = " << num1 * num2 << std::endl;
            break;

        case '/':
            if(num2 != 0)
                std::cout << num1 << " / " << num2 << " = " << num1 / num2 << std::endl;
            else
                std::cout << "Error! Division by zero." << std::endl;
            break;

        default:
            std::cout << "Error! operator is not correct" << std::endl;
            break;
    }

    return 0;
}
