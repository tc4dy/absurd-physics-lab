import math

def calculate_dilated_time(proper_time, velocity_fraction):
    lorentz_factor = 1.0 / math.sqrt(1.0 - velocity_fraction**2)
    dilated_time = proper_time * lorentz_factor
    return lorentz_factor, dilated_time

proper_time = 10.0
velocity = 0.8

factor, dilated = calculate_dilated_time(proper_time, velocity)
print(f"Velocity: {velocity * 100}% the speed of light")
print(f"Proper time on spaceship: {proper_time} years")
print(f"Lorentz factor: {factor:.4f}")
print(f"Time passed on Earth: {dilated:.4f} years")
