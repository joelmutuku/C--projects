#include <iostream>

int main(){

    int age;
    std::string name;

    std::cout << "What is your name?: ";
    std::cin >> name;

    std::cout << "What is your age?: ";
    std::cin >> age;

    if(age >= 18 ){
        std::cout << "Welcome " << name;
    }

    else{
        std::cout << "You have been locked out of the site";
    }

    return 0;
}