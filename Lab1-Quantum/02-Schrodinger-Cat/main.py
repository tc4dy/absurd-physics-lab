import random

class SchrodingerBox:
    def __init__(self, decay_probability):
        self.decay_probability = decay_probability
        self.state = "superposition"

    def observe(self):
        if self.state == "superposition":
            if random.random() < self.decay_probability:
                self.state = "dead"
            else:
                self.state = "alive"
        return self.state

box = SchrodingerBox(0.5)
print(f"Box sealed. Decay probability: {box.decay_probability * 100}%")
print(f"Current state: {box.state}")
print("Opening the box to observe...")
result = box.observe()
print(f"Observed state: {result}")
