# Vehicle.py
class Vehicle:
    def __init__(self, brand="", model="", year=0, plate_number=""):
        self.brand = brand
        self.model = model
        self.year = year
        self.plate_number = plate_number
    
    def get_brand(self):
        return self.brand
    
    def set_brand(self, brand):
        self.brand = brand
    
    def get_model(self):
        return self.model
    
    def set_model(self, model):
        self.model = model
    
    def get_year(self):
        return self.year
    
    def set_year(self, year):
        self.year = year
    
    def get_plate_number(self):
        return self.plate_number
    
    def set_plate_number(self, plate_number):
        self.plate_number = plate_number
    
    def display(self):
        print(f"Brand: {self.brand}")
        print(f"Model: {self.model}")
        print(f"Year: {self.year}")
        print(f"Plate Number: {self.plate_number}")
