def solve_equilibrium(a0, b0, c0, K):
    x = 0.0
    dx = 0.001
    for _ in range(10000):
        a = a0 - x
        b = b0 - x
        c = c0 + x
        if a <= 0 or b <= 0:
            break
        Q = c / (a * b)
        if abs(Q - K) < 1e-6:
            break
        if Q < K:
            x += dx
        else:
            x -= dx
    return a0 - x, b0 - x, c0 + x

a0 = 1.0
b0 = 1.0
c0 = 0.0
K = 4.0

print(f"Initial concentrations: A={a0}, B={b0}, C={c0}")
print(f"Equilibrium constant K = {K}")

a, b, c = solve_equilibrium(a0, b0, c0, K)
Q = c / (a * b)

print(f"Equilibrium concentrations: A={a:.6f}, B={b:.6f}, C={c:.6f}")
print(f"Reaction quotient Q = {Q:.6f}")
