#include <iostream>

int main(){

    // foreach loop = loop that eases the traversal over an 
    //                iterable data set

    int grades[] = {65, 72, 81, 93};

    for(int grade : grades){
        std::cout << grade << ' ';
    }

    //std::string students[] = {"Naruto", "Sasuke", "Sakura"};
    /*
    for(std::string student : students){
        std::cout << student << ' ';
    }
    */

    return 0;
}