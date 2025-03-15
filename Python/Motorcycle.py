# Motorcycle.py
from Vehicle import Vehicle

class Motorcycle(Vehicle):
    def __init__(self, brand="", model="", year=0, plate_number="", type="standard", engine_cc=150):
        super().__init__(brand, model, year, plate_number)
        self.type = type
        self.engine_cc = engine_cc
    
    def get_type(self):
        return self.type
    
    def set_type(self, type):
        self.type = type
    
    def get_engine_cc(self):
        return self.engine_cc
    
    def set_engine_cc(self, engine_cc):
        self.engine_cc = engine_cc
    
    def ride(self):
        print(f"Riding {self.brand} {self.model}")
    
    def display(self):
        super().display()
        print(f"Type: {self.type}")
        print(f"Engine CC: {self.engine_cc}")
