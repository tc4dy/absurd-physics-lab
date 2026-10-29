import random

class EntangledPair:
    def __init__(self):
        self.particle_a = None
        self.particle_b = None

    def measure_a(self):
        if self.particle_a is None:
            spin = random.choice(["up", "down"])
            self.particle_a = spin
            self.particle_b = "down" if spin == "up" else "up"
        return self.particle_a

    def measure_b(self):
        return self.particle_b

pair = EntangledPair()
print("Entangled pair created. State is a shared superposition.")
print("Particle A moved to Earth. Particle B moved to Mars.")
print("Measuring Particle A...")
spin_a = pair.measure_a()
print(f"Particle A observed as: {spin_a}")
print("Checking Particle B instantaneously...")
spin_b = pair.measure_b()
print(f"Particle B observed as: {spin_b}")
