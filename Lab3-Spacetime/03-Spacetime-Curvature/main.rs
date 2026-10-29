const G: f64 = 6.67430e-11;
const M: f64 = 1.989e30;

fn tidal_terms(r: f64) -> (f64, f64) {
    let factor = G * M / (r * r * r);
    (2.0 * factor, -factor)
}

fn main() {
    let r = 1.0e7;
    let mut x_parallel = 1.0;
    let mut x_perp = 1.0;
    let dt = 1.0e-4;
    let steps = 1000;

    println!("Black hole mass: {:.3e} kg", M);
    println!("Radial coordinate: {:.1e} m", r);
    println!("Initial radial separation: {:.1} m", x_parallel);
    println!("Initial transverse separation: {:.1} m", x_perp);

    for _ in 0..steps {
        let (a_parallel, a_perp) = tidal_terms(r);
        x_parallel += 0.5 * a_parallel * dt * dt;
        x_perp += 0.5 * a_perp * dt * dt;
    }

    println!("Final radial separation: {:.6e} m", x_parallel);
    println!("Final transverse separation: {:.6e} m", x_perp);
}
