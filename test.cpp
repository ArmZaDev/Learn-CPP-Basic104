#include <iostream>

class Stove{
    public:
        int temperature = 0;
    public:

    Stove(int temperature){
        setTemperature(temperature);
    }

    int getTemperature(){
        return temperature;
    }
    void setTemperature(int temperature){
        if(temperature < 0){
            this->temperature = 0;
        }
        else if(temperature >= 10){
            this->temperature = 10;
        }
        else{
            this->temperature = temperature;
        }
        
    }
};

int main(){
    
    Stove stove(10);

    //stove.setTemperature(100);

    std::cout << "The temperature setting is: " << stove.temperature;

    return 0;
}