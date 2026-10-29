def relativistic_addition(v1, v2):
    return (v1 + v2) / (1 + (v1 * v2))

v1 = 0.8
v2 = 0.7

classical = v1 + v2
relativistic = relativistic_addition(v1, v2)

print(f"Velocity 1: {v1}c")
print(f"Velocity 2: {v2}c")
print(f"Classical addition: {classical}c")
print(f"Relativistic addition: {relativistic:.4f}c")
