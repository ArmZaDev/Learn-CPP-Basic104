#include <iostream>

int main(){
    
    std::string name = "Naruto";
    int age = 33;
    std::string freePizza[5] = {"pizza1", "pizza2", "pizza3", "pizza4", "pizza5"};
    
    std::string *pName = &name;
    int *pAge = &age;
    std::string *pFreePizza = freePizza;

    std::cout << *pName << '\n';
    std::cout << *pAge << '\n';
    std::cout << *pFreePizza << '\n';

    return 0;
}