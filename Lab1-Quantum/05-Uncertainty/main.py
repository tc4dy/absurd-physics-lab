class ParticleState:
    def __init__(self):
        self.delta_x = 1.0
        self.delta_p = 1.0

    def measure_position(self, target_precision):
        if target_precision <= 0:
            return
        self.delta_x = target_precision
        self.delta_p = 1.0 / self.delta_x
        print(f"Target position precision: {self.delta_x}")
        print(f"Forced momentum uncertainty: {self.delta_p:.4f}")

    def measure_momentum(self, target_precision):
        if target_precision <= 0:
            return
        self.delta_p = target_precision
        self.delta_x = 1.0 / self.delta_p
        print(f"Target momentum precision: {self.delta_p}")
        print(f"Forced position uncertainty: {self.delta_x:.4f}")

particle = ParticleState()
print(f"Initial state: dx={particle.delta_x}, dp={particle.delta_p}")
print("Attempting highly precise position measurement...")
particle.measure_position(0.01)
print("Attempting highly precise momentum measurement...")
particle.measure_momentum(0.001)
