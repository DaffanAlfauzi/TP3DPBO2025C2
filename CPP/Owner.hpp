// Owner.hpp
#pragma once
#include <string>
#include <vector>
#include <iostream>

class Vehicle; // Forward declaration

// Composition example: Owner has vehicles
class Owner {
private:
    std::string name;
    std::string id;
    int age;
    std::vector<Vehicle*> vehicles;

public:
    Owner(std::string name = "", std::string id = "", int age = 0)
        : name(name), id(id), age(age) {}
    
    ~Owner() {}

    // Getters and Setters
    std::string getName() const { return name; }
    void setName(std::string name) { this->name = name; }
    
    std::string getId() const { return id; }
    void setId(std::string id) { this->id = id; }
    
    int getAge() const { return age; }
    void setAge(int age) { this->age = age; }
    
    // Vehicle ownership management
    void addVehicle(Vehicle* vehicle) {
        vehicles.push_back(vehicle);
    }
    
    std::vector<Vehicle*> getVehicles() const {
        return vehicles;
    }
    
    void display() const {
        std::cout << "Owner: " << name << std::endl;
        std::cout << "ID: " << id << std::endl;
        std::cout << "Age: " << age << std::endl;
        std::cout << "Number of vehicles: " << vehicles.size() << std::endl;
    }
};