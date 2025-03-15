# Car.py
from Vehicle import Vehicle

class Car(Vehicle):
    def __init__(self, brand="", model="", year=0, plate_number="", num_doors=4, body_type="sedan"):
        super().__init__(brand, model, year, plate_number)
        self.num_doors = num_doors
        self.body_type = body_type
    
    def get_num_doors(self):
        return self.num_doors
    
    def set_num_doors(self, num_doors):
        self.num_doors = num_doors
    
    def get_body_type(self):
        return self.body_type
    
    def set_body_type(self, body_type):
        self.body_type = body_type
    
    def drive(self):
        print(f"Driving {self.brand} {self.model}")
    
    def display(self):
        super().display()
        print(f"Number of Doors: {self.num_doors}")
        print(f"Body Type: {self.body_type}")
