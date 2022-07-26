#include <iostream>


int main(){
    
    // break = break out of a loop
    // continue = skip current iteration

    for (int i = 1; i <= 5; i++){
        if(i == 3){
            break;
        }
        std::cout << i << '\n';
    }

    std::cout << "\n**********************\n";

    for (int i = 1; i <= 5; i++){
        if(i == 3){
            continue;
        }
        std::cout << i << '\n';
    }

    return 0;
}