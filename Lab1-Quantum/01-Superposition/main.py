import random

class QubitState:
    def __init__(self, alpha, beta):
        self.alpha = alpha
        self.beta = beta

    def measure(self):
        prob_alpha = self.alpha ** 2
        prob_beta = self.beta ** 2
        total_prob = prob_alpha + prob_beta
        normalized_alpha = prob_alpha / total_prob

        print(f"Wave function collapsing...")
        if random.random() < normalized_alpha:
            self.alpha, self.beta = 1.0, 0.0
            return "|0>"
        else:
            self.alpha, self.beta = 0.0, 1.0
            return "|1>"

qubit = QubitState(0.8, 0.6)
print(f"Initial state vector: [{qubit.alpha:.2f}, {qubit.beta:.2f}]")
print(f"Probability of |0>: {(qubit.alpha**2) * 100:.1f}%")
print(f"Probability of |1>: {(qubit.beta**2) * 100:.1f}%")

result = qubit.measure()
print(f"Collapsed state: {result}")
print(f"Final state vector: [{qubit.alpha:.2f}, {qubit.beta:.2f}]")
