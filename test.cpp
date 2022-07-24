#include <iostream>

int main(){

    // arithimetic operatoes = return the result of a specific
    //                         arithmetic operation (+ - * /)

    int students = 20;

    //students = students + 1;
    students+=1;
    students++;

    //students = students - 2;
    students-=2;

    //students = students * 2;
    students*=2;

    //students = students / 3;
    students/=3;

    std::cout << students;

    //parenthesis ()
    //multiplication * & division /
    //addition + & subtraction -

    int result = 6 - (5 + 4) * 3 / 2;
    std::cout << result;

    return 0;
}