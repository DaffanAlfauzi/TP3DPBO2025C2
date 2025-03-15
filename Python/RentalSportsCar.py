# RentalSportsCar.py (Hybrid inheritance)
from SportsCar import SportsCar
from Rentable import Rentable

class RentalSportsCar(SportsCar, Rentable):
    def __init__(self, brand="", model="", year=0, plate_number="",
                num_doors=2, body_type="coupe", top_speed=200, zero_to_sixty=5.0,
                rental_rate=150.0, is_rented=False, current_renter="",
                requires_deposit=True, deposit_amount=1000.0):
        SportsCar.__init__(self, brand, model, year, plate_number, num_doors, body_type, top_speed, zero_to_sixty)
        Rentable.__init__(self, rental_rate, is_rented)
        self.current_renter = current_renter
        self.requires_deposit = requires_deposit
        self.deposit_amount = deposit_amount
    
    def get_requires_deposit(self):
        return self.requires_deposit
    
    def set_requires_deposit(self, requires):
        self.requires_deposit = requires
    
    def get_deposit_amount(self):
        return self.deposit_amount
    
    def set_deposit_amount(self, amount):
        self.deposit_amount = amount
    
    # Implementation of Rentable abstract methods
    def rent_out(self, renter_name):
        if not self.is_rented:
            self.is_rented = True
            self.current_renter = renter_name
            print(f"{self.brand} {self.model} rented to {renter_name}")
            if self.requires_deposit:
                print(f"Deposit of ${self.deposit_amount} required.")
        else:
            print("This sports car is already rented.")
    
    def return_vehicle(self):
        if self.is_rented:
            self.is_rented = False
            print(f"{self.brand} {self.model} returned by {self.current_renter}")
            if self.requires_deposit:
                print(f"Deposit of ${self.deposit_amount} returned.")
            self.current_renter = ""
        else:
            print("This sports car is not currently rented.")
    
    def display(self):
        SportsCar.display(self)
        print(f"Rental Rate: ${self.rental_rate} per day")
        print(f"Status: {'Rented to ' + self.current_renter if self.is_rented else 'Available'}")
        print(f"Requires Deposit: {'Yes' if self.requires_deposit else 'No'}")
        if self.requires_deposit:
            print(f"Deposit Amount: ${self.deposit_amount}")
