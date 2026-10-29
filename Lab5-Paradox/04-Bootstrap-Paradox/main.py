entity_a = {}
entity_b = {}

entity_a["origin"] = entity_b
entity_b["origin"] = entity_a

print("Entities created.")
print(f"Entity A refers to an object with keys: {list(entity_a['origin'].keys())}")
print(f"Entity B refers to an object with keys: {list(entity_b['origin'].keys())}")
print("The causal loop is closed. Neither object has an independent origin.")
