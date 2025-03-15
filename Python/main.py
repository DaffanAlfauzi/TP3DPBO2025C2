# main.py
from Vehicle import Vehicle
from Car import Car
from Motorcycle import Motorcycle
from SportsCar import SportsCar
from RentalCar import RentalCar
from RentalSportsCar import RentalSportsCar
from Owner import Owner
from Garage import Garage

def main():
    # Create vehicles
    sedan = Car("Toyota", "Camry", 2020, "ABC123", 4, "sedan")
    bike = Motorcycle("Honda", "CBR", 2019, "XYZ789", "sport", 600)
    sports_car = SportsCar("Ferrari", "488", 2022, "SPT456", 2, "coupe", 330, 3.0)
    rental_car = RentalCar("Nissan", "Altima", 2021, "RNT789", 4, "sedan", 75.0)
    rental_sports_car = RentalSportsCar("Porsche", "911", 2023, "RSC321", 2, "coupe", 300, 3.2, 350.0)
    
    # Create owners (composition)
    john = Owner("John Smith", "JS123", 35)
    jane = Owner("Jane Doe", "JD456", 28)
    
    # Add vehicles to owners
    john.add_vehicle(sedan)
    john.add_vehicle(sports_car)
    jane.add_vehicle(bike)
    jane.add_vehicle(rental_car)
    
    # Create garage (array of objects)
    city_garage = Garage("City Garage", "123 Main St", 20)
    
    # Add vehicles to garage
    city_garage.add_vehicle(sedan)
    city_garage.add_vehicle(bike)
    city_garage.add_vehicle(sports_car)
    city_garage.add_vehicle(rental_car)
    city_garage.add_vehicle(rental_sports_car)
    
    # Test rental functionality (multiple inheritance)
    rental_car.rent_out("Bob Johnson")
    rental_sports_car.rent_out("Alex Wilson")
    
    # Display information
    print("===== Vehicle Information =====")
    print("\n--- Car ---")
    sedan.display()
    sedan.drive()
    
    print("\n--- Motorcycle ---")
    bike.display()
    bike.ride()
    
    print("\n--- Sports Car ---")
    sports_car.display()
    sports_car.race()
    
    print("\n--- Rental Car ---")
    rental_car.display()
    rental_car.return_vehicle()
    
    print("\n--- Rental Sports Car ---")
    rental_sports_car.display()
    
    print("\n===== Owner Information =====")
    print("\n--- John ---")
    john.display()
    
    print("\n--- Jane ---")
    jane.display()
    
    print("\n===== Garage Information =====")
    city_garage.display()

if __name__ == "__main__":
    main()