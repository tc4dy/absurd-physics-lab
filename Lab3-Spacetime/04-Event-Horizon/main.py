import math

G = 6.67430e-11
c = 299792458.0

def schwarzschild_radius(mass):
    return 2.0 * G * mass / (c ** 2)

def time_dilation_factor(r, rs):
    if r <= rs:
        return 0.0
    return math.sqrt(1.0 - rs / r)

mass = 1.989e30
rs = schwarzschild_radius(mass)
print(f"Mass: {mass:.3e} kg")
print(f"Schwarzschild radius: {rs:.4f} m")

for factor in [2.0, 1.5, 1.1, 1.01, 1.001]:
    r = rs * factor
    td = time_dilation_factor(r, rs)
    print(f"r = {r:.4f} m  ({factor:.3f} rs)  time dilation = {td:.6f}")
