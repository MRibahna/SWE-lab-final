// a CPP program using factory design pattern to manufacture different type od vahiccles(car, bike,truct)
#include <iostream>
#include <string>   
using namespace std;
// Abstract class for Vehicle
class Vehicle {
public:
    virtual void drive() = 0; // pure virtual function
};
// Concrete class for Car   
class Car : public Vehicle {
public:
    void drive() override {
        cout << "Driving a car." << endl;
    }
};
// Concrete class for Bike
class Bike : public Vehicle {
    public:
    void drive() override {
        cout << "Riding a bike." << endl;
    }
};
// Concrete class for Truck
class Truck : public Vehicle {
public:
    void drive() override {
        cout << "Driving a truck." << endl;
    }
};
// Factory class to create vehicles
class VehicleFactory {
public:
    static Vehicle* createVehicle(const string& type) {
        if (type == "car") {
            return new Car();
        } else if (type == "bike") {
            return new Bike();
        } else if (type == "truck") {
            return new Truck();
        } else {
            return nullptr;
        }
    }

};
int main(){
    Vehicle* vehicle1 = VehicleFactory::createVehicle("car");
    if (vehicle1) {
        vehicle1->drive();
        delete vehicle1; // Don't forget to free the memory
    }

    Vehicle* vehicle2 = VehicleFactory::createVehicle("bike");
    if (vehicle2) {
        vehicle2->drive();
        delete vehicle2; // Don't forget to free the memory
    }

    Vehicle* vehicle3 = VehicleFactory::createVehicle("truck");
    if (vehicle3) {
        vehicle3->drive();
        delete vehicle3; // Don't forget to free the memory
    }

    return 0;
}
