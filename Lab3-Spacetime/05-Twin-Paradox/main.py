import math

def lorentz_factor(v):
    return 1.0 / math.sqrt(1.0 - v**2)

def proper_time_traveler(L, v):
    gamma = lorentz_factor(v)
    return 2.0 * L / (gamma * v)

def coordinate_time_stationary(L, v):
    return 2.0 * L / v

L = 10.0
v = 0.8

gamma = lorentz_factor(v)
t_stationary = coordinate_time_stationary(L, v)
t_traveler = proper_time_traveler(L, v)

print(f"Distance to destination: {L} light-years")
print(f"Velocity: {v}c")
print(f"Lorentz factor: {gamma:.4f}")
print(f"Stationary twin elapsed time: {t_stationary:.4f} years")
print(f"Traveling twin elapsed time: {t_traveler:.4f} years")
print(f"Age difference: {t_stationary - t_traveler:.4f} years")
