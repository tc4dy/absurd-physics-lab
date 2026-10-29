distance = 100.0
steps = 0

print(f"Initial distance to target: {distance} meters")
print("Beginning the infinite subdivision...")

while distance > 1e-15:
    distance /= 2.0
    steps += 1

print(f"Target reached after {steps} subdivisions.")
print(f"Final calculated distance: {distance}")
