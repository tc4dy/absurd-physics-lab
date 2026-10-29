use rand::Rng;

struct CatBox {
    decay_probability: f64,
    state: Option<&'static str>,
}

impl CatBox {
    fn observe(&mut self) -> &'static str {
        if self.state.is_none() {
            let mut rng = rand::thread_rng();
            let r: f64 = rng.gen();
            
            if r < self.decay_probability {
                self.state = Some("dead");
            } else {
                self.state = Some("alive");
            }
        }
        self.state.unwrap()
    }
}

fn main() {
    let mut box_system = CatBox {
        decay_probability: 0.5,
        state: None,
    };

    println!("Box sealed. Decay probability: {}%", box_system.decay_probability * 100.0);
    println!("Current state: superposition");
    
    println!("Opening the box to observe...");
    let result = box_system.observe();
    
    println!("Observed state: {}", result);
}
