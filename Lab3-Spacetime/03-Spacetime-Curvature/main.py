import math

G = 6.67430e-11
M = 1.989e30
c = 299792458.0

def tidal_terms(r):
    factor = G * M / (r ** 3)
    radial = 2.0 * factor
    transverse = -factor
    return radial, transverse

def integrate_deviation(r, x_parallel, x_perp, dt, steps):
    for _ in range(steps):
        a_parallel, a_perp = tidal_terms(r)
        x_parallel += 0.5 * a_parallel * dt * dt
        x_perp += 0.5 * a_perp * dt * dt
    return x_parallel, x_perp

r = 1.0e7
x_parallel = 1.0
x_perp = 1.0
dt = 1.0e-4
steps = 1000

print(f"Black hole mass: {M:.3e} kg")
print(f"Radial coordinate: {r:.1e} m")
print(f"Initial radial separation: {x_parallel} m")
print(f"Initial transverse separation: {x_perp} m")

xp, xt = integrate_deviation(r, x_parallel, x_perp, dt, steps)
print(f"Final radial separation: {xp:.6e} m")
print(f"Final transverse separation: {xt:.6e} m")
