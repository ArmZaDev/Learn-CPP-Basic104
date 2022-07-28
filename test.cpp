#include <iostream>

class Human{
    public:
        std::string name;
        std::string occupation;
        int age;

        void eat(){
            std::cout << "This person is eating\n";
        }
        void drink(){
            std::cout << "This person is drinking\n";
        }
        void sleep(){
            std::cout << "This person is sleeping\n";
        }
};

int main(){
    
    Human human1;

    human1.name = "Tommy";
    human1.occupation = "bookmaker";
    human1.age = 35;

    std::cout << human1.name << '\n';
    std::cout << human1.occupation << '\n';
    std::cout << human1.age << '\n';

    human1.drink();

    return 0;
}