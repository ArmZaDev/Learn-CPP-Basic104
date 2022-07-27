#include <iostream>


int main(){

    // fill() = Filla range of elements with a secified value
    //          fill(begin, end, value)

    const int SIZE = 10;
    std::string foods[SIZE];

    fill(foods, foods + (SIZE / 2), "pizza");
    fill(foods + (SIZE / 2), foods + SIZE, "hamburgers");   

    for(std::string food : foods){
        std::cout << food << '\n';
    }

    return 0;
}