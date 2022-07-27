#include <iostream>

int main(){

    // sizeof() = determiners the size in bytes of a:
    //            variable, data type, class, object, etc. 

    std::string name = "Inazuma Eleven";
    double gpa = 2.5;
    char grade = 'F';
    bool student = true;
    char grades[] = {'A', 'B', 'C', 'D', 'F'};
    std::string students[] = {"Naruto", "Sasuke", "Sakura", "Kakashi"};

    std::cout << sizeof(students)/sizeof(std::string) << " elements\n";

    return 0;
}