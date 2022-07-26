#include <iostream>

void bakePizza();
void bakePizza(std::string topping1);
void bakePizza(std::string topping1, std::string toppnig2);

int main(){

    bakePizza("pepperoni", "mushroom");

    return 0;
}

void bakePizza(){
    std::cout << "Here is your pizza!\n";
}
void bakePizza(std::string topping1){
    std::cout << "Here is your " << topping1 << " pizza!\n";
}
void bakePizza(std::string topping1, std::string toppnig2){
    std::cout << "Here is your " << topping1 << " and " << toppnig2 << '\n';
}