#include <iostream>
#include <string>

void happyBrithday(std::string name, int age);

int main(){

    //funtion = a block of reusable code

    std::string name = "Sasuke";
    int age = 35;

    happyBrithday(name, age);

    return 0;
}

void happyBrithday(std::string name, int age){
    std::cout << "Happy Birthday to " << name << '\n';
    std::cout << "Happy Birthday to " << name << '\n';
    std::cout << "Happy Birtday dear " << name << '\n';
    std::cout << "You are " << age << " years old!" << '\n';
}