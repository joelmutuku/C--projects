#include <iostream>


int main(){

       int temp; 
       bool sunny;
        
       std::cout << "Enter Temperature:";
       std::cin >> temp;

       if(temp <= 0 || temp >= 30){
       std::cout << "Temp is good!\n";
       }
       else{
        std::cout << "Temp is bad!\n";
       }
       if(!sunny){
        std::cout << "It's cloudy outside!";
       }
       else{
        std::cout << "It's sunny outside!";
       }
      return 0;
    }
