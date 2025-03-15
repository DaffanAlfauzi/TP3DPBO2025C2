# Garage.py (Array of objects)
class Garage:
    def __init__(self, name="", address="", capacity=10):
        self.name = name
        self.address = address
        self.capacity = capacity
        self.vehicles = []
    
    def get_name(self):
        return self.name
    
    def set_name(self, name):
        self.name = name
    
    def get_address(self):
        return self.address
    
    def set_address(self, address):
        self.address = address
    
    def get_capacity(self):
        return self.capacity
    
    def set_capacity(self, capacity):
        self.capacity = capacity
    
    def add_vehicle(self, vehicle):
        if len(self.vehicles) < self.capacity:
            self.vehicles.append(vehicle)
            return True
        return False
    
    def remove_vehicle(self, plate_number):
        for i, vehicle in enumerate(self.vehicles):
            if vehicle.get_plate_number() == plate_number:
                del self.vehicles[i]
                return True
        return False
    
    def get_vehicles(self):
        return self.vehicles
    
    def display(self):
        print(f"Garage: {self.name}")
        print(f"Address: {self.address}")
        print(f"Capacity: {self.capacity}")
        print(f"Current Vehicles: {len(self.vehicles)}/{self.capacity}")
        
        if self.vehicles:
            print("\nVehicles in garage:")
            for vehicle in self.vehicles:
                print(f"- {vehicle.get_brand()} {vehicle.get_model()} ({vehicle.get_plate_number()})")
