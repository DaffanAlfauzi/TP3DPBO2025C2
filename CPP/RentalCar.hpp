// RentalCar.hpp (Multiple inheritance)
#pragma once
#include "Car.hpp"
#include "Rentable.hpp"

class RentalCar : public Car, public Rentable {
private:
    std::string currentRenter;
    int maxRentalDays;

public:
    RentalCar(std::string brand = "", std::string model = "", int year = 0, std::string plateNumber = "",
             int numDoors = 4, std::string bodyType = "sedan", double rentalRate = 50.0, bool isRented = false,
             std::string currentRenter = "", int maxRentalDays = 7)
        : Car(brand, model, year, plateNumber, numDoors, bodyType),
          Rentable(rentalRate, isRented),
          currentRenter(currentRenter), maxRentalDays(maxRentalDays) {}
    
    ~RentalCar() {}

    // Getters and Setters
    std::string getCurrentRenter() const { return currentRenter; }
    
    int getMaxRentalDays() const { return maxRentalDays; }
    void setMaxRentalDays(int days) { maxRentalDays = days; }
    
    // Implementation of Rentable interface methods
    virtual void rentOut(std::string renterName) override {
        if (!isRented) {
            isRented = true;
            currentRenter = renterName;
            std::cout << brand << " " << model << " rented to " << renterName << std::endl;
        } else {
            std::cout << "This car is already rented." << std::endl;
        }
    }
    
    virtual void returnVehicle() override {
        if (isRented) {
            isRented = false;
            std::cout << brand << " " << model << " returned by " << currentRenter << std::endl;
            currentRenter = "";
        } else {
            std::cout << "This car is not currently rented." << std::endl;
        }
    }
    
    virtual void display() const override {
        Car::display();
        std::cout << "Rental Rate: $" << rentalRate << " per day" << std::endl;
        std::cout << "Status: " << (isRented ? "Rented to " + currentRenter : "Available") << std::endl;
        std::cout << "Maximum Rental Period: " << maxRentalDays << " days" << std::endl;
    }
};