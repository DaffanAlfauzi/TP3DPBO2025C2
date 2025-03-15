// Motorcycle.hpp
#pragma once
#include "Vehicle.hpp"

class Motorcycle : public Vehicle {
private:
    std::string type;     // sport, cruiser, touring, etc.
    int engineCC;

public:
    Motorcycle(std::string brand = "", std::string model = "", int year = 0, std::string plateNumber = "",
              std::string type = "standard", int engineCC = 150)
        : Vehicle(brand, model, year, plateNumber), type(type), engineCC(engineCC) {}
    
    ~Motorcycle() {}

    // Getters and Setters
    std::string getType() const { return type; }
    void setType(std::string type) { this->type = type; }
    
    int getEngineCC() const { return engineCC; }
    void setEngineCC(int engineCC) { this->engineCC = engineCC; }
    
    void ride() const {
        std::cout << "Riding " << brand << " " << model << std::endl;
    }
    
    virtual void display() const override {
        Vehicle::display();
        std::cout << "Type: " << type << std::endl;
        std::cout << "Engine CC: " << engineCC << std::endl;
    }
};