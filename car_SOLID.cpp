#include <iostream>
#include <string>

using namespace std;

// Interface for starting and stopping
class ICarActions {
public:
    virtual void start() const = 0;
    virtual void stop() const = 0;
    virtual ~ICarActions() = default;
};

// Interface for car information
class ICarInfo {
public:
    virtual int getYear() const = 0;
    virtual string getBrand() const = 0;
    virtual string getModel() const = 0;
    virtual ~ICarInfo() = default;
};

// Concrete Car class implementing interfaces
class Car : public ICarActions, public ICarInfo {
public:
    Car(int year, const string& brand, const string& model, int speed, const string& cpu)
        : year(year), brand(brand), model(model), speed(speed), CPU(cpu) {}

    void start() const override {
        cout << "Car started" << endl;
    }

    void stop() const override {
        cout << "Car stopped" << endl;
    }

    int getYear() const override {
        return year;
    }

    string getBrand() const override {
        return brand;
    }

    string getModel() const override {
        return model;
    }

    int getSpeed() const {
        return speed;
    }

private:
    int year;
    string brand;
    string model;
    int speed;
    string CPU;
};

int main() {
    Car luxuryCar(1994, "Cadillac", "Model S", 100, "Raytheon");

    cout << "The Year of the car is: " << luxuryCar.getYear() << endl;

    luxuryCar.start();
    luxuryCar.stop();

    return 0;
}
