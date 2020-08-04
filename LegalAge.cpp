#include <iostream>
int actual_year = 2020;
int y_birth;
int main()
{
    int user_age;
    std::cout << "Please enter your birth year: ";
    std::cin >> y_birth;
    user_age = actual_year - y_birth;
    if (user_age >= 18) {
        std::cout << "You can access this system!";
    }else{
        std::cout << "You cannot access this system. Please return and try later.";
    }
}