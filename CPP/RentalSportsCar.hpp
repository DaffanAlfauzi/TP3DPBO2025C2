// RentalSportsCar.hpp (Hybrid inheritance)
#pragma once
#include "SportsCar.hpp"
#include "Rentable.hpp"

class RentalSportsCar : public SportsCar, public Rentable {
private:
    std::string currentRenter;
    bool requiresDeposit;
    double depositAmount;

public:
    RentalSportsCar(std::string brand = "", std::string model = "", int year = 0, std::string plateNumber = "",
                   int numDoors = 2, std::string bodyType = "coupe", int topSpeed = 200, double zeroToSixty = 5.0,
                   double rentalRate = 150.0, bool isRented = false, std::string currentRenter = "",
                   bool requiresDeposit = true, double depositAmount = 1000.0)
        : SportsCar(brand, model, year, plateNumber, numDoors, bodyType, topSpeed, zeroToSixty),
          Rentable(rentalRate, isRented),
          currentRenter(currentRenter), requiresDeposit(requiresDeposit), depositAmount(depositAmount) {}
    
    ~RentalSportsCar() {}

    // Getters and Setters
    bool getRequiresDeposit() const { return requiresDeposit; }
    void setRequiresDeposit(bool requires) { requiresDeposit = requires; }
    
    double getDepositAmount() const { return depositAmount; }
    void setDepositAmount(double amount) { depositAmount = amount; }
    
    // Implementation of Rentable interface methods
    virtual void rentOut(std::string renterName) override {
        if (!isRented) {
            isRented = true;
            currentRenter = renterName;
            std::cout << brand << " " << model << " rented to " << renterName << std::endl;
            if (requiresDeposit) {
                std::cout << "Deposit of $" << depositAmount << " required." << std::endl;
            }
        } else {
            std::cout << "This sports car is already rented." << std::endl;
        }
    }
    
    virtual void returnVehicle() override {
        if (isRented) {
            isRented = false;
            std::cout << brand << " " << model << " returned by " << currentRenter << std::endl;
            if (requiresDeposit) {
                std::cout << "Deposit of $" << depositAmount << " returned." << std::endl;
            }
            currentRenter = "";
        } else {
            std::cout << "This sports car is not currently rented." << std::endl;
        }
    }
    
    virtual void display() const override {
        SportsCar::display();
        std::cout << "Rental Rate: $" << rentalRate << " per day" << std::endl;
        std::cout << "Status: " << (isRented ? "Rented to " + currentRenter : "Available") << std::endl;
        std::cout << "Requires Deposit: " << (requiresDeposit ? "Yes" : "No") << std::endl;
        if (requiresDeposit) {
            std::cout << "Deposit Amount: $" << depositAmount << std::endl;
        }
    }
};
