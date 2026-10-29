fn godel_critical_radius(omega: f64) -> f64 {
    (1.0 + 2.0_f64.sqrt()).ln() / omega
}

fn main() {
    let omega = 1.0;
    let rc = godel_critical_radius(omega);
    println!("Gödel rotation parameter omega: {}", omega);
    println!("Critical radius for CTCs: {:.4}", rc);

    for &r in &[0.5, 1.0, 1.2, 1.5, 2.0] {
        let status = if r > rc { "CTC region" } else { "causal region" };
        println!("r = {:.1}  {}", r, status);
    }
}
