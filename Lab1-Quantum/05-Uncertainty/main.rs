struct ParticleState {
    delta_x: f64,
    delta_p: f64,
}

impl ParticleState {
    fn measure_position(&mut self, precision: f64) {
        if precision <= 0.0 {
            return;
        }
        self.delta_x = precision;
        self.delta_p = 1.0 / precision;
        println!("Target position precision: {}", self.delta_x);
        println!("Forced momentum uncertainty: {:.4}", self.delta_p);
    }

    fn measure_momentum(&mut self, precision: f64) {
        if precision <= 0.0 {
            return;
        }
        self.delta_p = precision;
        self.delta_x = 1.0 / precision;
        println!("Target momentum precision: {}", self.delta_p);
        println!("Forced position uncertainty: {:.4}", self.delta_x);
    }
}

fn main() {
    let mut particle = ParticleState {
        delta_x: 1.0,
        delta_p: 1.0,
    };

    println!("Initial state: dx={}, dp={}", particle.delta_x, particle.delta_p);
    
    println!("Attempting highly precise position measurement...");
    particle.measure_position(0.01);
    
    println!("Attempting highly precise momentum measurement...");
    particle.measure_momentum(0.001);
}
