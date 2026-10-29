import math

def remaining_amount(N0, half_life, t):
    lam = math.log(2) / half_life
    return N0 * math.exp(-lam * t)

N0 = 100.0
half_life = 5.0
print(f"Initial amount: {N0}")
print(f"Half-life: {half_life} years")

for t in [0, 5, 10, 15, 20, 25, 30]:
    N = remaining_amount(N0, half_life, t)
    print(f"t = {t:3d} years  remaining = {N:.4f}  ({N/N0*100:.1f}%)")
