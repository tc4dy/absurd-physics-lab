use rand::Rng;

struct Particle {
    energy: f64,
    state: &'static str,
}

impl Particle {
    fn approach_barrier(&mut self, barrier_height: f64, barrier_width: f64) {
        println!("Particle energy: {:.1} eV", self.energy);
        println!("Barrier height: {:.1} eV, Width: {:.1} nm", barrier_height, barrier_width);

        if self.energy >= barrier_height {
            self.state = "transmitted";
            println!("Classical regime: Particle passes over the barrier.");
            return;
        }

        let kappa = (2.0 * (barrier_height - self.energy)).sqrt();
        let transmission_prob = (-2.0 * kappa * barrier_width).exp();

        println!("Quantum tunneling probability: {:.4}%", transmission_prob * 100.0);

        let mut rng = rand::thread_rng();
        let r: f64 = rng.gen();

        if r < transmission_prob {
            self.state = "transmitted";
        } else {
            self.state = "reflected";
        }
    }
}

fn main() {
    let mut particle = Particle {
        energy: 5.0,
        state: "incident",
    };

    particle.approach_barrier(10.0, 0.5);
    println!("Final state: {}", particle.state);
}
