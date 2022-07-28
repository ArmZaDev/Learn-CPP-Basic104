#include <iostream>

class Pizza{
    public:
        std::string topping1;
        std::string topping2;

    Pizza(){

    }
    Pizza(std::string topping1){
        this->topping1 = topping1;
    }
    Pizza(std::string topping1, std::string topping2){
        this->topping1 = topping1;
        this->topping2 = topping2;
    }
       
};

int main(){
    
    Pizza pizaa1("pepperoni");
    Pizza pizaa2("pepperoni", "mushroom");
    Pizza pizaa3;

    std::cout << pizaa1.topping1 << '\n';

    std::cout << pizaa2.topping1 << '\n';
    std::cout << pizaa2.topping2 << '\n';

    return 0;
}