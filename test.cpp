#include <iostream>


int main(){
    // tarnary operators ?: = replacement to an ifelse statement
    // condition ? expression1 : expression2;

    int grade = 75;
    grade >= 60 ? std::cout << "You pass!" : std::cout << "You fail";

    int number = 8;
    number % 2 == 0 ? std::cout << "ODD" : std::cout << "EVEN";


    bool hungry = true;

    //hungry ? std::cout << "You are hungry" : std::cout << "You are full";
    std::cout << (hungry ? "You are hungry" : "You are full");

    /*
    if (grade >= 60){
        std::cout << "You pass!";
    }
    else {
        std::cout << "You fail!";
    }
    */

    return 0;
}