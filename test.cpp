#include <iostream>


int main(){
    
    // && = check if two condition are true 
    // || = check if at least one of two condition is true
    // ! = reverses the logical state of its operand

    int temp;
    bool sunny = false;

    std::cout << "Enter the temperature: ";
    std::cin >> temp;

    // temp <= 0 || temp >= 30
    if (temp > 0 && temp < 30){ 
        std::cout << "The temperature is good!\n";
    }
    else{
        std::cout << "The temperature ids bad!\n";
    }

    if (!sunny){
        std::cout << "It is sunny outside!";
    }
    else{
        std::cout << "It is cloudy outside!";
    }

    return 0;
}