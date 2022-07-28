#include <iostream>

void printInfo(const std::string &name, const int &age);

int main(){

    // const parameter = parameter that is effectively read-only
    //                   code is more secure & converys intent
    //                   useful for references and pointers

    std::string name = "Naruto";
    int age = 33;

    printInfo(name, age);

    return 0;
}

void printInfo(const std::string &name, const int &age){
    std::cout << name << '\n';
    std::cout << age << '\n';       

}