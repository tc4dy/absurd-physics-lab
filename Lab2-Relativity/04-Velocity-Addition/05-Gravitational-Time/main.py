import math

G = 6.67430e-11
M = 5.972e24
R = 6371000.0
C = 299792458.0

def gravitational_time_dilation():
    factor = math.sqrt(1.0 - (2 * G * M) / (R * C**2))
    return factor

factor = gravitational_time_dilation()
seconds_per_year = 365.25 * 24 * 3600
time_lost = seconds_per_year * (1 - factor)

print(f"Gravitational time dilation factor: {factor:.12f}")
print(f"Time lost per year on Earth's surface: {time_lost:.4f} seconds")
