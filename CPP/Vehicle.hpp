#pragma once
#include <string>
#include <iostream>

class Vehicle {
protected:
    std::string brand;
    std::string model;
    int year;
    std::string plateNumber;

public:
    Vehicle(std::string brand = "", std::string model = "", int year = 0, std::string plateNumber = "")
        : brand(brand), model(model), year(year), plateNumber(plateNumber) {}
    
    virtual ~Vehicle() {}

    // Getters and Setters
    std::string getBrand() const { return brand; }
    void setBrand(std::string brand) { this->brand = brand; }  // <-- fix here

    std::string getModel() const { return model; }
    void setModel(std::string model) { this->model = model; }  // <-- fix here
    
    int getYear() const { return year; }
    void setYear(int year) { this->year = year; }  // <-- fix here
    
    std::string getPlateNumber() const { return plateNumber; }
    void setPlateNumber(std::string plateNumber) { this->plateNumber = plateNumber; }  // <-- fix here
    
    virtual void display() const {
        std::cout << "Brand: " << brand << std::endl;
        std::cout << "Model: " << model << std::endl;
        std::cout << "Year: " << year << std::endl;
        std::cout << "Plate Number: " << plateNumber << std::endl;
    }
};
