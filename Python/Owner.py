# Owner.py
class Owner:
    def __init__(self, name="", id="", age=0):
        self.name = name
        self.id = id
        self.age = age
        self.vehicles = []
    
    def get_name(self):
        return self.name
    
    def set_name(self, name):
        self.name = name
    
    def get_id(self):
        return self.id
    
    def set_id(self, id):
        self.id = id
    
    def get_age(self):
        return self.age
    
    def set_age(self, age):
        self.age = age
    
    def add_vehicle(self, vehicle):
        self.vehicles.append(vehicle)
    
    def get_vehicles(self):
        return self.vehicles
    
    def display(self):
        print(f"Owner: {self.name}")
        print(f"ID: {self.id}")
        print(f"Age: {self.age}")
        print(f"Number of vehicles: {len(self.vehicles)}")
