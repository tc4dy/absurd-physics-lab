use std::env;
use std::fs;

fn main() {
    let path = env::current_exe().unwrap();
    println!("Executing file: {}", path.display());
    println!("Initiating self-destruct sequence...");
    
    match fs::remove_file(path) {
        Ok(_) => println!("File successfully deleted from disk."),
        Err(_) => println!("Failed to delete file."),
    }

    println!("Process is still alive and executing from memory.");
}
