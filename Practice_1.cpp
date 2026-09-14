#include <iostream>
#include <string>

int main(){

    int age;
    std::string name;
    std::string answer;

    std::cout << "What is your name?: ";
    std::cin >> name;

    std::cout << "What is your age?: ";
    std::cin >> age;

    if(age >= 18 ){
        std::cout << "Welcome " << name;
    }

    else if(age < 18){
        std::cout << "Do you have permission from your parent/gaurdian?: ";
        std::cin >> answer;

        if(answer == "Yes"){
            std::cout << "You are welcome " << name;
        }
        else{
            std::cout << "You have been locked out of this site!";
        }

    }

    else{
        std::cout << "You have been locked out of the site";
    }

    

    return 0;
}