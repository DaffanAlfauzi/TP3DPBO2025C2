// SportsCar.hpp (Hierarchical inheritance)
#pragma once
#include "Car.hpp"

class SportsCar : public Car {
private:
    int topSpeed;
    double zeroToSixty; // in seconds

public:
    SportsCar(std::string brand = "", std::string model = "", int year = 0, std::string plateNumber = "",
             int numDoors = 2, std::string bodyType = "coupe", int topSpeed = 200, double zeroToSixty = 5.0)
        : Car(brand, model, year, plateNumber, numDoors, bodyType),
          topSpeed(topSpeed), zeroToSixty(zeroToSixty) {}
    
    ~SportsCar() {}

    // Getters and Setters
    int getTopSpeed() const { return topSpeed; }
    void setTopSpeed(int topSpeed) { this->topSpeed = topSpeed; }
    
    double getZeroToSixty() const { return zeroToSixty; }
    void setZeroToSixty(double zeroToSixty) { this->zeroToSixty = zeroToSixty; }
    
    void race() const {
        std::cout << brand << " " << model << " is racing at " << topSpeed << " km/h!" << std::endl;
    }
    
    virtual void display() const override {
        Car::display();
        std::cout << "Top Speed: " << topSpeed << " km/h" << std::endl;
        std::cout << "0-60 Time: " << zeroToSixty << " seconds" << std::endl;
    }
};