fn main() {
    let c: f64 = 299792458.0;
    let mass: f64 = 0.001;
    
    let energy = mass * (c * c);
    
    println!("Mass converted: {} kg", mass);
    println!("Speed of light: {} m/s", c);
    println!("Energy released: {} Joules", energy);
}
