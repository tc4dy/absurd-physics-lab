const G: f64 = 6.67430e-11;
const C: f64 = 299792458.0;

fn schwarzschild_radius(mass: f64) -> f64 {
    2.0 * G * mass / (C * C)
}

fn time_dilation_factor(r: f64, rs: f64) -> f64 {
    if r <= rs {
        return 0.0;
    }
    (1.0 - rs / r).sqrt()
}

fn main() {
    let mass = 1.989e30;
    let rs = schwarzschild_radius(mass);
    println!("Mass: {:.3e} kg", mass);
    println!("Schwarzschild radius: {:.4} m", rs);

    for &factor in &[2.0, 1.5, 1.1, 1.01, 1.001] {
        let r = rs * factor;
        let td = time_dilation_factor(r, rs);
        println!("r = {:.4} m  ({:.3} rs)  time dilation = {:.6}", r, factor, td);
    }
}
