def scalar_triple_product(a, b, c):
    cross_bc = [
        b[1] * c[2] - b[2] * c[1],
        b[2] * c[0] - b[0] * c[2],
        b[0] * c[1] - b[1] * c[0]
    ]
    return a[0] * cross_bc[0] + a[1] * cross_bc[1] + a[2] * cross_bc[2]

def chirality_assignment(a, b, c):
    stp = scalar_triple_product(a, b, c)
    return "R" if stp > 0 else "S"

center = [0.0, 0.0, 0.0]
sub1 = [1.0, 0.0, 0.0]
sub2 = [0.0, 1.0, 0.0]
sub3 = [0.0, 0.0, 1.0]

a = [sub1[i] - center[i] for i in range(3)]
b = [sub2[i] - center[i] for i in range(3)]
c = [sub3[i] - center[i] for i in range(3)]

print("Chiral center at origin")
print(f"Substituent 1: {sub1}")
print(f"Substituent 2: {sub2}")
print(f"Substituent 3: {sub3}")
print(f"Chirality: {chirality_assignment(a, b, c)}")
