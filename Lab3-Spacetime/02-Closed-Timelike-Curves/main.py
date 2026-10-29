import math

def godel_critical_radius(omega):
    return math.log(1.0 + math.sqrt(2.0)) / omega

omega = 1.0
rc = godel_critical_radius(omega)
print(f"Gödel rotation parameter omega: {omega}")
print(f"Critical radius for CTCs: {rc:.4f}")

for r in [0.5, 1.0, 1.2, 1.5, 2.0]:
    in_ctc = r > rc
    status = "CTC region" if in_ctc else "causal region"
    print(f"r = {r:.1f}  {status}")
