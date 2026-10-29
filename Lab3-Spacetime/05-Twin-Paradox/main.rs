fn lorentz_factor(v: f64) -> f64 {
    1.0 / (1.0 - v * v).sqrt()
}

fn main() {
    let l = 10.0;
    let v = 0.8;
    let gamma = lorentz_factor(v);
    let t_stationary = 2.0 * l / v;
    let t_traveler = 2.0 * l / (gamma * v);

    println!("Distance to destination: {:.1} light-years", l);
    println!("Velocity: {}c", v);
    println!("Lorentz factor: {:.4}", gamma);
    println!("Stationary twin elapsed time: {:.4} years", t_stationary);
    println!("Traveling twin elapsed time: {:.4} years", t_traveler);
    println!("Age difference: {:.4} years", t_stationary - t_traveler);
}
