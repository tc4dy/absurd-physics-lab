import math

def calculate_contracted_length(proper_length, velocity_fraction):
    lorentz_factor = 1.0 / math.sqrt(1.0 - velocity_fraction**2)
    contracted_length = proper_length / lorentz_factor
    return lorentz_factor, contracted_length

proper_length = 100.0
velocity = 0.9

factor, contracted = calculate_contracted_length(proper_length, velocity)
print(f"Velocity: {velocity * 100}% the speed of light")
print(f"Proper length: {proper_length} meters")
print(f"Lorentz factor: {factor:.4f}")
print(f"Contracted length: {contracted:.4f} meters")
