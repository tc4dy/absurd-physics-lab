use std::rc::Rc;
use std::cell::RefCell;

struct Entity {
    origin: Option<Rc<RefCell<Entity>>>,
}

fn main() {
    let entity_a = Rc::new(RefCell::new(Entity { origin: None }));
    let entity_b = Rc::new(RefCell::new(Entity { origin: None }));
    
    entity_a.borrow_mut().origin = Some(Rc::clone(&entity_b));
    entity_b.borrow_mut().origin = Some(Rc::clone(&entity_a));
    
    println!("Entities created.");
    println!("Entity A strong count: {}", Rc::strong_count(&entity_a));
    println!("Entity B strong count: {}", Rc::strong_count(&entity_b));
    println!("The causal loop is closed. Neither object has an independent origin.");
}
