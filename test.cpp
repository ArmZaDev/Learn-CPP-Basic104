#include <iostream>

int main(){

    // array = a data structure that can hold multiple values
    //         values are accessed by an index number
    //         "kind of like a variable that holds miltiple values"
    
    //std::string cars[] = {"Corvertte", "Mustang", "camry"};
    std::string cars[3];
    
    cars[0] = "Camaro";
    cars[1] = "Tesla";
    cars[2] = "Audi";
    
    std::cout << cars[0] << '\n';
    std::cout << cars[1] << '\n';
    std::cout << cars[2] << '\n';

    return 0;
}