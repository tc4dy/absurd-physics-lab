import math

def wavefunction(x, L, c1, c2):
    psi1 = math.sin(math.pi * x / L)
    psi2 = math.sin(2 * math.pi * x / L)
    return c1 * psi1 + c2 * psi2

def probability_density(x, L, c1, c2):
    psi = wavefunction(x, L, c1, c2)
    return psi * psi

L = 1.0
c1 = 0.707
c2 = 0.707
print(f"Box length: {L}")
print(f"Coefficients: c1={c1}, c2={c2}")

for x in [0.1, 0.2, 0.3, 0.4, 0.5, 0.6, 0.7, 0.8, 0.9]:
    p = probability_density(x, L, c1, c2)
    print(f"x = {x:.1f}  probability density = {p:.6f}")
