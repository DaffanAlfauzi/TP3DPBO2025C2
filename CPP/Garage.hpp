// Garage.hpp (Array of objects)
#pragma once
#include <string>
#include <vector>
#include <iostream>
#include "Vehicle.hpp"

class Garage {
private:
    std::string name;
    std::string address;
    int capacity;
    std::vector<Vehicle*> vehicles;

public:
    Garage(std::string name = "", std::string address = "", int capacity = 10)
        : name(name), address(address), capacity(capacity) {}
    
    ~Garage() {}

    // Getters and Setters
    std::string getName() const { return name; }
    void setName(std::string name) { this->name = name; }
    
    std::string getAddress() const { return address; }
    void setAddress(std::string address) { this->address = address; }
    
    int getCapacity() const { return capacity; }
    void setCapacity(int capacity) { this->capacity = capacity; }
    
    // Vehicle management
    bool addVehicle(Vehicle* vehicle) {
        if (vehicles.size() < capacity) {
            vehicles.push_back(vehicle);
            return true;
        }
        return false;
    }
    
    bool removeVehicle(std::string plateNumber) {
        for (auto it = vehicles.begin(); it != vehicles.end(); ++it) {
            if ((*it)->getPlateNumber() == plateNumber) {
                vehicles.erase(it);
                return true;
            }
        }
        return false;
    }
    
    std::vector<Vehicle*> getVehicles() const {
        return vehicles;
    }
    
    void display() const {
        std::cout << "Garage: " << name << std::endl;
        std::cout << "Address: " << address << std::endl;
        std::cout << "Capacity: " << capacity << std::endl;
        std::cout << "Current Vehicles: " << vehicles.size() << "/" << capacity << std::endl;
        
        if (!vehicles.empty()) {
            std::cout << "\nVehicles in garage:" << std::endl;
            for (auto vehicle : vehicles) {
                std::cout << "- " << vehicle->getBrand() << " " << vehicle->getModel() 
                          << " (" << vehicle->getPlateNumber() << ")" << std::endl;
            }
        }
    }
};
