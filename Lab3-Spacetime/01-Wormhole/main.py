import math

def shape_function(r, r0):
    return (r0 ** 2) / r

def embedding_profile(r, r0, steps=1000):
    dr = (r - r0) / steps
    z = 0.0
    for i in range(steps):
        ri = r0 + i * dr
        b = shape_function(ri, r0)
        integrand = math.sqrt(b / (ri - b)) if ri > b else 0.0
        z += integrand * dr
    return z

r0 = 1.0
print(f"Wormhole throat radius: {r0}")
print(f"Throat condition b(r0) = r0: {shape_function(r0, r0):.4f} == {r0}")

for r in [1.0, 1.5, 2.0, 3.0, 5.0, 10.0]:
    b = shape_function(r, r0)
    z = embedding_profile(r, r0)
    print(f"r = {r:5.1f}  b(r) = {b:.4f}  z(r) = {z:.4f}  b(r) < r: {b < r}")
