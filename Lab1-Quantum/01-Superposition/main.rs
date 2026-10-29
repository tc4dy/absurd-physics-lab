use rand::Rng;

struct Qubit {
    alpha: f64,
    beta: f64,
}

impl Qubit {
    fn measure(&mut self) -> &'static str {
        let prob_alpha = self.alpha * self.alpha;
        let prob_beta = self.beta * self.beta;
        let total = prob_alpha + prob_beta;
        let threshold = prob_alpha / total;
        
        let mut rng = rand::thread_rng();
        let r: f64 = rng.gen();
        
        println!("Wave function collapsing...");
        if r < threshold {
            self.alpha = 1.0;
            self.beta = 0.0;
            "|0>"
        } else {
            self.alpha = 0.0;
            self.beta = 1.0;
            "|1>"
        }
    }
}

fn main() {
    let mut qubit = Qubit { alpha: 0.8, beta: 0.6 };
    
    println!("Initial state vector: [{:.2}, {:.2}]", qubit.alpha, qubit.beta);
    println!("Probability of |0>: {:.1}%", (qubit.alpha * qubit.alpha) * 100.0);
    println!("Probability of |1>: {:.1}%", (qubit.beta * qubit.beta) * 100.0);
    
    let result = qubit.measure();
    
    println!("Collapsed state: {}", result);
    println!("Final state vector: [{:.2}, {:.2}]", qubit.alpha, qubit.beta);
}
