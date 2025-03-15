# Rentable.py
from abc import ABC, abstractmethod

class Rentable(ABC):
    def __init__(self, rental_rate=0.0, is_rented=False):
        self.rental_rate = rental_rate
        self.is_rented = is_rented
    
    def get_rental_rate(self):
        return self.rental_rate
    
    def set_rental_rate(self, rate):
        self.rental_rate = rate
    
    def get_is_rented(self):
        return self.is_rented
    
    def set_is_rented(self, rented):
        self.is_rented = rented
    
    @abstractmethod
    def rent_out(self, renter_name):
        pass
    
    @abstractmethod
    def return_vehicle(self):
        pass