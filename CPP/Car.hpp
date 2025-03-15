// Car.hpp
#pragma once
#include "Vehicle.hpp"

class Car : public Vehicle {
protected:
    int numDoors;
    std::string bodyType;  // sedan, SUV, hatchback, etc.

public:
    Car(std::string brand = "", std::string model = "", int year = 0, std::string plateNumber = "",
        int numDoors = 4, std::string bodyType = "sedan")
        : Vehicle(brand, model, year, plateNumber), numDoors(numDoors), bodyType(bodyType) {}
    
    ~Car() {}

    // Getters and Setters
    int getNumDoors() const { return numDoors; }
    void setNumDoors(int numDoors) { this->numDoors = numDoors; }
    
    std::string getBodyType() const { return bodyType; }
    void setBodyType(std::string bodyType) { this->bodyType = bodyType; }
    
    void drive() const {
        std::cout << "Driving " << brand << " " << model << std::endl;
    }
    
    virtual void display() const override {
        Vehicle::display();
        std::cout << "Number of Doors: " << numDoors << std::endl;
        std::cout << "Body Type: " << bodyType << std::endl;
    }
};
