def autocatalytic_rate(p, a, k1, k2):
    return k1 * a * p + k2 * p * p

a0 = 1.0
p0 = 0.01
k1 = 0.1
k2 = 0.5
dt = 0.01
steps = 1000

a = a0
p = p0
print(f"Initial reactant A: {a0}")
print(f"Initial product P: {p0}")
print(f"Rate constants: k1={k1}, k2={k2}")

for i in range(steps):
    rate = autocatalytic_rate(p, a, k1, k2)
    dp = rate * dt
    p += dp
    a -= dp
    if i % 100 == 0:
        print(f"t = {i * dt:.2f}  P = {p:.6f}  A = {a:.6f}")

print(f"Final P: {p:.6f}  Final A: {a:.6f}")
