fn main() {
    let g = 6.67430e-11;
    let m = 5.972e24;
    let r = 6371000.0;
    let c = 299792458.0;
    
    let factor = (1.0 - (2.0 * g * m) / (r * c * c)).sqrt();
    let seconds_per_year = 365.25 * 24.0 * 3600.0;
    let time_lost = seconds_per_year * (1.0 - factor);
    
    println!("Gravitational time dilation factor: {:.12}", factor);
    println!("Time lost per year on Earth's surface: {:.4} seconds", time_lost);
}
