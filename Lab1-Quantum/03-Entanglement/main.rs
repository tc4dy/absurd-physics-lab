use rand::Rng;

struct EntangledPair {
    particle_a: Option<&'static str>,
    particle_b: Option<&'static str>,
}

impl EntangledPair {
    fn measure_a(&mut self) -> &'static str {
        if self.particle_a.is_none() {
            let mut rng = rand::thread_rng();
            let spin = if rng.gen_bool(0.5) { "up" } else { "down" };
            self.particle_a = Some(spin);
            self.particle_b = Some(if spin == "up" { "down" } else { "up" });
        }
        self.particle_a.unwrap()
    }

    fn measure_b(&self) -> &'static str {
        self.particle_b.unwrap()
    }
}

fn main() {
    let mut pair = EntangledPair {
        particle_a: None,
        particle_b: None,
    };

    println!("Entangled pair created. State is a shared superposition.");
    println!("Particle A moved to Earth. Particle B moved to Mars.");
    
    println!("Measuring Particle A...");
    let spin_a = pair.measure_a();
    println!("Particle A observed as: {}", spin_a);
    
    println!("Checking Particle B instantaneously...");
    let spin_b = pair.measure_b();
    println!("Particle B observed as: {}", spin_b);
}
