#include <iostream>

// Exercise 1
// int main()
// {
//     std::cout << "Enter an integer:";

//     int x{};

//     std::cin >> x;

//     std::cout << "Double that number is: " << 2*x;

//     return 0;
// }

// Exercise 2
// int main()
// {
//     std::cout << "Enter your first number: ";
    
//     int a{};
//     std::cin >> a;

//     std::cout << "Enter your second number: ";

//     int b{};
//     std::cin >> b;

//     std::cout << "Enter your third number: ";

//     int c{};
//     std::cin >> c;

//     std::cout << "Your total is: " << a+b+c;

//      return 0;
//  }

// Exercise 3
int getValueFromUser()
{
    std::cout << "Enter an integer: ";
    int input{};
    std::cin >> input;

    return input;
}

int main()
{
    int a {getValueFromUser()};
    int b {getValueFromUser()};

    std::cout << a << "+" << b << "=" << a+b;

    return 0;
}
  