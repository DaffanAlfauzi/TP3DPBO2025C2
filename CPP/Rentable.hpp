// Rentable.hpp (Interface for multiple inheritance)
#pragma once
#include <string>

class Rentable {
protected:
    double rentalRate;
    bool isRented;
    
public:
    Rentable(double rentalRate = 0.0, bool isRented = false)
        : rentalRate(rentalRate), isRented(isRented) {}
    
    virtual ~Rentable() {}
    
    double getRentalRate() const { return rentalRate; }
    void setRentalRate(double rate) { rentalRate = rate; }
    
    bool getIsRented() const { return isRented; }
    void setIsRented(bool rented) { isRented = rented; }
    
    // Pure virtual function - must be implemented by derived classes
    virtual void rentOut(std::string renterName) = 0;
    virtual void returnVehicle() = 0;
};