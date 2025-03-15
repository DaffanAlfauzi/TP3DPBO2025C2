// main.cpp
#include <iostream>
#include "Vehicle.hpp"
#include "Car.hpp"
#include "Motorcycle.hpp"
#include "SportsCar.hpp"
#include "RentalCar.hpp"
#include "RentalSportsCar.hpp"
#include "Owner.hpp"
#include "Garage.hpp"

int main() {
    // Create vehicles
    Car* sedan = new Car("Toyota", "Camry", 2020, "ABC123", 4, "sedan");
    Motorcycle* bike = new Motorcycle("Honda", "CBR", 2019, "XYZ789", "sport", 600);
    SportsCar* sportsCar = new SportsCar("Ferrari", "488", 2022, "SPT456", 2, "coupe", 330, 3.0);
    RentalCar* rentalCar = new RentalCar("Nissan", "Altima", 2021, "RNT789", 4, "sedan", 75.0);
    RentalSportsCar* rentalSportsCar = new RentalSportsCar("Porsche", "911", 2023, "RSC321", 2, "coupe", 300, 3.2, 350.0);
    
    // Create owners (composition)
    Owner* john = new Owner("John Smith", "JS123", 35);
    Owner* jane = new Owner("Jane Doe", "JD456", 28);
    
    // Add vehicles to owners
    john->addVehicle(sedan);
    john->addVehicle(sportsCar);
    jane->addVehicle(bike);
    jane->addVehicle(rentalCar);
    
    // Create garage (array of objects)
    Garage* cityGarage = new Garage("City Garage", "123 Main St", 20);
    
    // Add vehicles to garage
    cityGarage->addVehicle(sedan);
    cityGarage->addVehicle(bike);
    cityGarage->addVehicle(sportsCar);
    cityGarage->addVehicle(rentalCar);
    cityGarage->addVehicle(rentalSportsCar);
    
    // Test rental functionality (multiple inheritance)
    rentalCar->rentOut("Bob Johnson");
    rentalSportsCar->rentOut("Alex Wilson");
    
    // Display information
    std::cout << "===== Vehicle Information =====" << std::endl;
    std::cout << "\n--- Car ---" << std::endl;
    sedan->display();
    sedan->drive();
    
    std::cout << "\n--- Motorcycle ---" << std::endl;
    bike->display();
    bike->ride();
    
    std::cout << "\n--- Sports Car ---" << std::endl;
    sportsCar->display();
    sportsCar->race();
    
    std::cout << "\n--- Rental Car ---" << std::endl;
    rentalCar->display();
    rentalCar->returnVehicle();
    
    std::cout << "\n--- Rental Sports Car ---" << std::endl;
    rentalSportsCar->display();
    
    std::cout << "\n===== Owner Information =====" << std::endl;
    std::cout << "\n--- John ---" << std::endl;
    john->display();
    
    std::cout << "\n--- Jane ---" << std::endl;
    jane->display();
    
    std::cout << "\n===== Garage Information =====" << std::endl;
    cityGarage->display();
    
    // Clean up
    delete sedan;
    delete bike;
    delete sportsCar;
    delete rentalCar;
    delete rentalSportsCar;
    delete john;
    delete jane;
    delete cityGarage;
    
    return 0;
}