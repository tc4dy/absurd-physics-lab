fn shape_function(r: f64, r0: f64) -> f64 {
    (r0 * r0) / r
}

fn embedding_profile(r: f64, r0: f64, steps: u32) -> f64 {
    let dr = (r - r0) / steps as f64;
    let mut z = 0.0;
    for i in 0..steps {
        let ri = r0 + i as f64 * dr;
        let b = shape_function(ri, r0);
        if ri > b {
            z += (b / (ri - b)).sqrt() * dr;
        }
    }
    z
}

fn main() {
    let r0 = 1.0;
    println!("Wormhole throat radius: {}", r0);
    println!("Throat condition b(r0) = r0: {:.4} == {}", shape_function(r0, r0), r0);

    for &r in &[1.0, 1.5, 2.0, 3.0, 5.0, 10.0] {
        let b = shape_function(r, r0);
        let z = embedding_profile(r, r0, 1000);
        println!("r = {:5.1}  b(r) = {:.4}  z(r) = {:.4}  b(r) < r: {}", r, b, z, b < r);
    }
}
