import math
import random

class Particle:
    def __init__(self, energy):
        self.energy = energy
        self.state = "incident"

    def approach_barrier(self, barrier_height, barrier_width):
        print(f"Particle energy: {self.energy} eV")
        print(f"Barrier height: {barrier_height} eV, Width: {barrier_width} nm")
        
        if self.energy >= barrier_height:
            self.state = "transmitted"
            print("Classical regime: Particle passes over the barrier.")
            return

        kappa = math.sqrt(2 * (barrier_height - self.energy))
        transmission_prob = math.exp(-2 * kappa * barrier_width)
        
        print(f"Quantum tunneling probability: {transmission_prob * 100:.4f}%")
        
        if random.random() < transmission_prob:
            self.state = "transmitted"
        else:
            self.state = "reflected"

particle = Particle(energy=5.0)
particle.approach_barrier(barrier_height=10.0, barrier_width=0.5)
print(f"Final state: {particle.state}")
