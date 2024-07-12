#include <iostream>
#include <string>

class Car {
    public: 
    int year;
    string brand;
    string model;
    void start() {
        cout << "Car started" << endL;
    }
    void stop() {
        cout << "Car stopped" << endL;
    }
    private:
    int speed;
    string CPU;
    int getSpeed() {
        return speed;
    }


}
int main(){
    Car LuxuryCar;
    LuxuryCar.year = 1994;
    LuxuryCar.brand = "Cadillac";
    LuxuryCar.speed = 100;
    LuxuryCar.CPU = "Raytheon";


cout << "The Year of the car is: " << LuxuryCar.year << endL;

}