#include <iostream>
#include <string>

double square(double length);
double cube(double length);
std::string concatString(std::string string1, std::string string2);

int main(){

    // return = return a value back to the spot
    //          where you called the encompassing function

    std::string firstName = "Arm";
    std::string lastName = "Za";
    std::string fullName =concatString(firstName, lastName);

    std::cout << "Hello " << fullName;

/*
    double length = 6.0;
    double area = square(length);
    double volume = cube(length);

    std::cout << "Arae: " << area << "cm^2\n";
    std::cout << "Volume: " << volume << "cm^3\n";
*/
    return 0;
}

double square(double length){
    return length * length;
}
double cube(double length){
    return length * length * length;
}

std::string concatString(std::string string1, std::string string2){
    return string1 + " " + string2;
}