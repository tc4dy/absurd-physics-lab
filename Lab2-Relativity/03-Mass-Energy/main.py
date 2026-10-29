C = 299792458

def calculate_energy(mass_kg):
    return mass_kg * (C ** 2)

mass = 0.001
energy = calculate_energy(mass)

print(f"Mass converted: {mass} kg")
print(f"Speed of light: {C} m/s")
print(f"Energy released: {energy} Joules")
