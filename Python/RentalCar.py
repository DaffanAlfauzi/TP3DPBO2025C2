# RentalCar.py (Multiple inheritance)
from Car import Car
from Rentable import Rentable

class RentalCar(Car, Rentable):
    def __init__(self, brand="", model="", year=0, plate_number="",
                num_doors=4, body_type="sedan", rental_rate=50.0, is_rented=False,
                current_renter="", max_rental_days=7):
        Car.__init__(self, brand, model, year, plate_number, num_doors, body_type)
        Rentable.__init__(self, rental_rate, is_rented)
        self.current_renter = current_renter
        self.max_rental_days = max_rental_days
    
    def get_current_renter(self):
        return self.current_renter
    
    def get_max_rental_days(self):
        return self.max_rental_days
    
    def set_max_rental_days(self, days):
        self.max_rental_days = days
    
    # Implementation of Rentable abstract methods
    def rent_out(self, renter_name):
        if not self.is_rented:
            self.is_rented = True
            self.current_renter = renter_name
            print(f"{self.brand} {self.model} rented to {renter_name}")
        else:
            print("This car is already rented.")
    
    def return_vehicle(self):
        if self.is_rented:
            self.is_rented = False
            print(f"{self.brand} {self.model} returned by {self.current_renter}")
            self.current_renter = ""
        else:
            print("This car is not currently rented.")
    
    def display(self):
        Car.display(self)
        print(f"Rental Rate: ${self.rental_rate} per day")
        print(f"Status: {'Rented to ' + self.current_renter if self.is_rented else 'Available'}")
        print(f"Maximum Rental Period: {self.max_rental_days} days")
