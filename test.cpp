#include <iostream>

int main(){

    // type conversion = conversion a value of one data type to another
    //                   Implicit = automatic
    //                   Explicit = Precede value with new data type (int)
    
    int correct = 8;
    int questions = 10;
    double score = correct/(double)questions * 100;

    std::cout << score << "%";
    
    /*
    double x = (int)3.14;
    std::cout << x;
    */

    return 0;
}