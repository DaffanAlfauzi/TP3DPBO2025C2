# SportsCar.py (Hierarchical inheritance)
from Car import Car

class SportsCar(Car):
    def __init__(self, brand="", model="", year=0, plate_number="",
                num_doors=2, body_type="coupe", top_speed=200, zero_to_sixty=5.0):
        super().__init__(brand, model, year, plate_number, num_doors, body_type)
        self.top_speed = top_speed
        self.zero_to_sixty = zero_to_sixty
    
    def get_top_speed(self):
        return self.top_speed
    
    def set_top_speed(self, top_speed):
        self.top_speed = top_speed
    
    def get_zero_to_sixty(self):
        return self.zero_to_sixty
    
    def set_zero_to_sixty(self, zero_to_sixty):
        self.zero_to_sixty = zero_to_sixty
    
    def race(self):
        print(f"{self.brand} {self.model} is racing at {self.top_speed} km/h!")
    
    def display(self):
        super().display()
        print(f"Top Speed: {self.top_speed} km/h")
        print(f"0-60 Time: {self.zero_to_sixty} seconds")
