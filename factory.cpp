// a CPP program using factory design pattern to manufacture different type od vahicles(car, bike,truct)
#include <iostream>
#include <string>   
using namespace std;
// Abstract/Base class for Vehicle
class Vehicle {
public:
    virtual void drive() = 0;
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
//main  function for implementing factory method
int main(){
    Vehicle* vehicle1 = VehicleFactory::createVehicle("car");
    if (vehicle1) {
        vehicle1->drive();
        delete vehicle1; 
    }

    Vehicle* vehicle2 = VehicleFactory::createVehicle("bike");
    if (vehicle2) {
        vehicle2->drive();
        delete vehicle2; 
    }

    Vehicle* vehicle3 = VehicleFactory::createVehicle("truck");
    if (vehicle3) {
        vehicle3->drive();
        delete vehicle3; 
    }

    return 0;
}


//gtest unit to check drive behavior